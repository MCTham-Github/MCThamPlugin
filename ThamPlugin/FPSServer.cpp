/* For some reason this code is unuseable now if you have any to update it please pull thanks.*/
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

class updatefps {
public:
    int fpsintserver = 0;
    string fpsstring;
    void update() {
        std::ostringstream fpssus;
        time_t begin_time; //time at the start of the loop
        time_t current_time; //time when checking for a one-second interval
        double frames = 0; //number of times passed through the loop

        time(&begin_time); //sets begin_time

        for (; ;) //or however you loop your game
        {
            frames++; //increments frames
            time(&current_time); //sets current_time

            //HERE IS WHERE YOU WOULD PUT YOUR CODE i.e. UPDATING AND DRAWING AND WHATNOT

            if (difftime(current_time, begin_time) >= 1.0) //if one second has passed since the loop started
            {
                logger.debug("Update FPS");
                fpssus << frames;
                fpsstring = fpssus.str(); //print the frames run through in one second
                frames = 0; //reset frames
                time(&begin_time); //resets begin_time
            }
        }
       
        
	}
};
class getfps : public Command {
public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const {
        updatefps fpsclass;
        outp.success("Server FPS: " + fpsclass.fpsstring);
        }
};

class loadcommand {
public:
    static void setup(CommandRegistry* registry) {
        using RegisterCommandHelper::makeMandatory;
        using RegisterCommandHelper::makeOptional;
        registry->registerCommand("serverfps", "giving a server fps rate", CommandPermissionLevel::GameMasters,
            { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
        registry->registerOverload<getfps>("serverfps");
    }
    void load() {
        Event::RegCmdEvent::subscribe([](const Event::RegCmdEvent& e) {
            setup(e.mCommandRegistry);
            return true;
            });
    }
};