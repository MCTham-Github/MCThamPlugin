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

extern Logger logger;

class KillItemClass {
public:
	void RunKillDrop() {
		logger.info("Auto KillDrop been running.");
		for (; ;) {
			Level::broadcastText("KillItemDrop will kill all trash entity in 10 mintues", TextType::CHAT);
			Sleep(300000);
			Level::broadcastText("KillItemDrop will kill all trash entity in 5 mintues", TextType::CHAT);
			Sleep(240000);
			Level::broadcastText("KillItemDrop will kill all trash entity in 1 mintues", TextType::CHAT);
			Sleep(45000);
			Level::broadcastText("KillItemDrop will kill all trash entity in 5 secound", TextType::CHAT);
			Sleep(5000);
			Level::runcmd("kill @e[type=item]");
			Sleep(5000);
		}
	}
};
