#include "ClassPlayer.h"
#include "HealthPlayer.h"
#include <iostream>

int Player::GetCoins() const { return coins; };
int Player::GetLVL() const { return lvl; };

Health health;

//int CountSteps() {
//	int Count;
//	++Count;
//	return Count
//}

std::string Inventory::GetInventory() const
{
	std::string result;
	for (const auto& item : *inventory) {
		result += item + " ";
	}
	std::cout << result;
	return result;
}

void Player::InfoPlayer() {

	std::cout << "Hp: " << health.GetHp() << "\nCoins: " << coins << "\nLvl: " << lvl << std::endl;
}

void Player::LVLUP() {

	++lvl;/*
	MaxHp = MaxHp * 1.1;
	damage = damage * 1.1;
	MaxExp = MaxExp * 1.8;
	CheckEXP();*/
}
void Player::InventoryAdd(std::string Item) {/*
	*inventory.push_back(Item);
	std::cout << *inventory.size();*/
}
void Player::InventoryCheak() {


	//for (int i = 0; i < *inventory.size(); i++) {
	//	std::cout << *inventory[i];
	//}
	
	/*for (auto i : inventory) {

		cout << i << " ";
	}*/
	
}

void Player::CheckEXP() {
	while (true) {
		if (exp >= MaxExp) {
			double EXP = exp - MaxExp;
			exp = 0;
			exp += EXP;
			LVLUP();
		}
		else { return; }
	}
}
