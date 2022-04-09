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
#include "KillDropItem.cpp"
#include "BlackListWord.cpp"
#include "BanHim.cpp"
#include "AntiSpam.cpp"
#include "Helpfulinfo.cpp"
#include "FPSServer.cpp"

Logger logger("ThamPlugin");

void LoadKillDropItem() {
	KillItemClass KillTrashAPI;
	KillTrashAPI.RunKillDrop();
}
void Loadantiblacklist() {
	blacklistwordclass ratiotext;
	ratiotext.loadhim();
}
void LoadBanHim() {
	banhimclass banratio;
	banratio.load();
}
void LoadAntiSpamming() {
	antispam antispamapi;
	antispamapi.loadantispam();
}
void LoadAutoDownForAntiSpamming() {
	antispam antispamapi;
	antispamapi.autodown();
}
void LoadGetPlatformPlayers() {
	Event::PlayerJoinEvent::subscribe([](const Event::PlayerJoinEvent& ev) {
		logger.info("Player: " + ev.mPlayer->getName() + " Using Platform: " + ev.mPlayer->getDeviceName());
		return true;
		});
}
void LoadHelpful() {
	helpfulclass helpful;
	helpful.Load();
}
void LoadServerFPS() {
	loadcommand loadfps;
	loadfps.load();
}
void LoadAlwaysUpdateFPS() {
	updatefps ufps;
	ufps.update();
}
void PluginInit()
{
		logger.info("████████╗██╗░░██╗░█████╗░███╗░░░███╗██████╗░██╗░░░░░██╗░░░██╗░██████╗░██╗███╗░░██╗");
			logger.info("╚══██╔══╝██║░░██║██╔══██╗████╗░████║██╔══██╗██║░░░░░██║░░░██║██╔════╝░██║████╗░██║");
				logger.info("░░░██║░░░███████║███████║██╔████╔██║██████╔╝██║░░░░░██║░░░██║██║░░██╗░██║██╔██╗██║");
					logger.info("░░░██║░░░██╔══██║██╔══██║██║╚██╔╝██║██╔═══╝░██║░░░░░██║░░░██║██║░░╚██╗██║██║╚████║");
						logger.info("░░░██║░░░██║░░██║██║░░██║██║░╚═╝░██║██║░░░░░███████╗╚██████╔╝╚██████╔╝██║██║░╚███║");
							logger.info("░░░╚═╝░░░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░░░░╚═╝╚═╝░░░░░╚══════╝░╚═════╝░░╚═════╝░╚═╝╚═╝░░╚══╝");
							logger.info("Best of MCTham Helper plugins");
							logger.warn("WARNING: Please using under MIT License and copyright");
							logger.info("Credit: fusedevgithub, mcthamteam (https://github.com/MCTham-Github/MCThamPlugin)");
	logger.info("Loading KillDropItem");
	std::thread runkilldropitem(LoadKillDropItem);
	runkilldropitem.detach();
	logger.info("Loading Anti Blacklist word");
	Loadantiblacklist();
	logger.info("Loading BanHim");
	LoadBanHim();
	logger.info("Loading Anti spamming");
	LoadAntiSpamming();
	std::thread antispamthread(LoadAutoDownForAntiSpamming);
	antispamthread.detach();
	logger.info("Loading Player Platform info");
	LoadGetPlatformPlayers();
	logger.info("Loading Helpful info");
	LoadHelpful();
}
