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
#include "endwith.cpp"

class blacklistwordclass {
public:
	void loadhim() {
		Event::PlayerChatEvent::subscribe([](const Event::PlayerChatEvent& ev) {
			endwithclass endclass;
			if (ev.mMessage == "cum") {
				ev.mPlayer->kick("Hey cumming is too nsfw.");
				return false;
			}
			else if (ev.mMessage == "cumming") {
				ev.mPlayer->kick("Hey cumming is too nsfw.");
				return false;
			}
			else if (endclass.hasEnding(ev.mMessage, "ควย")) {
				ev.mPlayer->kick("you mean a duck?");
				return false;
			}
			return true;
			});
	}
};