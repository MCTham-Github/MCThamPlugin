#include "pch.h"
#include <EventAPI.h>
#include <LoggerAPI.h>
#include <MC/Level.hpp>
#include <MC/BlockInstance.hpp>
#include <MC/Block.hpp>
#include <MC/BlockSource.hpp>
#include <MC/Actor.hpp>
#include <MC/Player.hpp>
#include <MC/ItemStack.hpp>
#include <LLAPI.h>
#include <string>
#include <thread>
#include <Windows.h>
#include <MC/Player.hpp>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <regCommandAPI.h>
#include <fstream>

using std::cout; using std::ofstream;
using std::endl; using std::string;
using std::cerr;
using std::fstream;

extern Logger logger;
class banplayer : public Command {
public:
    CommandSelector<Player> pl;
    string reason;
public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const {
        std::fstream file;
        string playername = pl.getName();
        string comban = "copy NUL banlist\\" + playername;
        system(comban.c_str());
        file.open("banlist\\" + playername);
        file << reason;
        file.close();
        outp.success("Kick a player (if this player is still in server)");
        Level::runcmd("kick " + pl.getName() + " You have been banned from MCTham Network! Please rejoined for more reason.");
        outp.success("Player been banned.");
    }
};
class banip : public Command {
public:
    string ip;
    void execute(CommandOrigin const& ori, CommandOutput& outp) const {
        string comban = "copy NUL banlistip\\" + ip;
        system(comban.c_str());
        outp.success("This IP been banned.");
    }
};
class banhimclass {
public:
    static void setup(CommandRegistry* registry) {
        using RegisterCommandHelper::makeMandatory;
        using RegisterCommandHelper::makeOptional;
        registry->registerCommand("ban", "ban a trash player", CommandPermissionLevel::GameMasters,
            { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
        registry->registerOverload<banplayer>("ban", makeMandatory(&banplayer::pl, "target"),
            makeMandatory(&banplayer::reason, "reason"));
    }
    static void setupip(CommandRegistry* registry) {
        using RegisterCommandHelper::makeMandatory;
        using RegisterCommandHelper::makeOptional;
        registry->registerCommand("banip", "blacklist this ip", CommandPermissionLevel::GameMasters,
            { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
        registry->registerOverload<banip>("banip", makeMandatory(&banip::ip, "IP Address"));
    }
    void load() {
        system("mkdir banlist");
        system("mkdir banlistip");
        Event::RegCmdEvent::subscribe([](const Event::RegCmdEvent& e) {
            setup(e.mCommandRegistry);
            setupip(e.mCommandRegistry);
            return true;
            });
        Event::PlayerJoinEvent::subscribe([](const Event::PlayerJoinEvent& ev) {
            std::ifstream ifile;
            ifile.open("banlist/" + ev.mPlayer->getName(), fstream::in);
            if (ifile) {
                string text; 
                    ifile >> text;
                ev.mPlayer->kick("You have been banned from MCTham Network!\nBan Type: Account\nReason: " + text);
            }
            else {
            }
            string ipwithport = ev.mPlayer->getIP();
            std::string realip = ipwithport.substr(0, ipwithport.find(":"));
            ifile.open("banlistip/" + realip, fstream::in);
            if (ifile) {
                ev.mPlayer->kick("You have been banned from MCTham Network!\nBan Type: IP");
            }
            else
            {

            }
            return true;
            });
    }
};