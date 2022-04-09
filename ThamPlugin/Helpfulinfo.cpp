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

extern Logger logger;

class getplatform : public Command {
public:
    CommandSelector<Player> pl;
    void execute(CommandOrigin const& ori, CommandOutput& outp) const {
        auto res = pl.results(ori);
        for (auto p : res) {
            outp.success("Player: " + p->getName() + " Using a Platform: " + p->getDeviceName());
        }
    }
};
class getip : public Command {
public:
    CommandSelector<Player> pl;
    void execute(CommandOrigin const& ori, CommandOutput& outp) const {
        auto res = pl.results(ori);
        for (auto p : res) {
            string ip = p->getIP();
            std::string realip = ip.substr(0, ip.find(":"));
            outp.success("Player: " + p->getName() + " IP: " + realip);
        }
    }
};

class CrashClient : public Command {
public:
    CommandSelector<Player> pl;
public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const {
        auto res = pl.results(ori);
        for (auto p : res) {
            p->crashClient();
        }
        outp.success("Cilent been Crashed");
    }

    };
    class GetPOS : public Command {
    public:
        CommandSelector<Player> pl;
    public:
        void execute(CommandOrigin const& ori, CommandOutput& outp) const {
            auto res = pl.results(ori);
            for (auto p : res) {
                outp.success("Player: " + p->getName() + " POS: " + p->getPosition().toString());
            }

        };

    };
    class helpfulclass {
    public:
        static void setupgetplatform(CommandRegistry* registry) {
            using RegisterCommandHelper::makeMandatory;
            using RegisterCommandHelper::makeOptional;
            registry->registerCommand("getplatform", "giving a player playform", CommandPermissionLevel::GameMasters,
                { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
            registry->registerOverload<getplatform>("getplatform", makeMandatory(&getplatform::pl, "Player"));
        }
        static void setupgetip(CommandRegistry* registry) {
            using RegisterCommandHelper::makeMandatory;
            using RegisterCommandHelper::makeOptional;
            registry->registerCommand("getip", "giving a player ip", CommandPermissionLevel::GameMasters,
                { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
            registry->registerOverload<getip>("getip", makeMandatory(&getip::pl, "Player"));
        }
        static void setupcrashclient(CommandRegistry* registry) {
            using RegisterCommandHelper::makeMandatory;
            using RegisterCommandHelper::makeOptional;
            registry->registerCommand("crashclient", "giving a player ip", CommandPermissionLevel::GameMasters,
                { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
            registry->registerOverload<getip>("crashclient", makeMandatory(&CrashClient::pl, "Player"));
        }
        static void setupgetpos(CommandRegistry* registry) {
            using RegisterCommandHelper::makeMandatory;
            using RegisterCommandHelper::makeOptional;
            registry->registerCommand("getpos", "giving a player postion", CommandPermissionLevel::GameMasters,
                { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
            registry->registerOverload<GetPOS>("getpos", makeMandatory(&GetPOS::pl, "Player"));
        }
        void Load() {
            Event::RegCmdEvent::subscribe([](const Event::RegCmdEvent& e) {
                setupgetplatform(e.mCommandRegistry);
                setupgetip(e.mCommandRegistry);
                setupcrashclient(e.mCommandRegistry);
                setupgetpos(e.mCommandRegistry);
                return true;
                });
        }
    };