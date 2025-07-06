#include "ClassPlayer.h"
#include <fstream>
#include <iostream>

std::fstream File("File.txt");

void CheckFail() {
	if (!File) {
		std::cout << "Ups!.. Error open file";
	};
};

void SavePlayer::Save(Player &player) {
	
	File /*<< player.GetHp()*/ << " " << player.GetCoins() << " " << player.GetLVL() << " " /*<< player.GetInventory()*/;
	
	File.close();

}