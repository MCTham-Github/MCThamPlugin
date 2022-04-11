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
    class GetUUID : public Command {
    public:
        CommandSelector<Player> pl;
    public:
        void execute(CommandOrigin const& ori, CommandOutput& outp) const {
            auto res = pl.results(ori);
            for (auto p : res) {
                outp.success("Player: " + p->getName() + " UUID: " + p->getUuid());
            }

        };

    };
    class GetPing : public Command {
    public:
        CommandSelector<Player> pl;
    public:
        void execute(CommandOrigin const& ori, CommandOutput& outp) const {
            auto res = pl.results(ori);
            for (auto p : res) {
                int ping = p->getAvgPing();
                outp.success("Player: " + p->getName() + " Ping: " + std::to_string(ping) + "ms");
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
        static void setupgetuuid(CommandRegistry* registry) {
            using RegisterCommandHelper::makeMandatory;
            using RegisterCommandHelper::makeOptional;
            registry->registerCommand("getuuid", "giving a player uuid", CommandPermissionLevel::GameMasters,
                { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
            registry->registerOverload<GetUUID>("getuuid", makeMandatory(&GetUUID::pl, "Player"));
        }
        static void setupgetping(CommandRegistry* registry) {
            using RegisterCommandHelper::makeMandatory;
            using RegisterCommandHelper::makeOptional;
            registry->registerCommand("getping", "giving a player ping", CommandPermissionLevel::GameMasters,
                { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
            registry->registerOverload<GetPing>("getping", makeMandatory(&GetPing::pl, "Player"));
        }
        void Load() {
            Event::RegCmdEvent::subscribe([](const Event::RegCmdEvent& e) {
                setupgetplatform(e.mCommandRegistry);
                setupgetip(e.mCommandRegistry);
                setupcrashclient(e.mCommandRegistry);
                setupgetpos(e.mCommandRegistry);
                setupgetuuid(e.mCommandRegistry);
                setupgetping(e.mCommandRegistry);
                return true;
                });
        }
    };