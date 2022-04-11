/* How Anti Spamming work?
	Anti Spamming is checking Message per second normally
			If message is over 5 message in sec mean kick it */
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
#include <set>
#include <iterator>

class Timer {
private:
    unsigned long startTime;
public:
    void start() {
        startTime = clock();
    }

    unsigned long elapsedTime() {
        return ((unsigned long)clock() - startTime) / CLOCKS_PER_SEC;
    }

    bool isTimeout(unsigned long seconds) {
        return seconds >= elapsedTime();
    }
};

class antispam {
public:
    int sameint = 0;
    string mostspammessage;
    string lastmessage;
	void loadantispam() {
        Event::ServerStoppedEvent::subscribe([](const Event::ServerStoppedEvent& e) {
            ExitThread;
            return true;
            });
		Event::PlayerChatEvent::subscribe([&](const Event::PlayerChatEvent& ev) {
            if (ev.mMessage == lastmessage) {
                mostspammessage = lastmessage;
            }
            if (ev.mMessage == mostspammessage) {
                sameint++;
            }
            if (sameint == 4) {
                ev.mPlayer->crashClient();
                mostspammessage = "";
                lastmessage = "";
                sameint = 0;
            }
            lastmessage = ev.mMessage;
			return true;
			});
	}
    void autodown() {
        for (; ;) {
            Sleep(1000);
            mostspammessage = "";
            lastmessage = "";
            sameint = 0;
        }
    }
};