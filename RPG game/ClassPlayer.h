#pragma once
#include <vector>
#include <string>

class Health;

class Player
{
public:

	int GetCoins() const;
	int GetLVL() const;
	int CountSteps();

	void InfoPlayer();
	void LVLUP();
	void InventoryAdd(std::string Item);
	void InventoryCheak();
	void CheckEXP();
	void Regeneration();


private:
	int test;
	int coins = 0;
	int lvl = 1;
	double exp = 0;
	double MaxExp = 200;
};

class SavePlayer 
{
public:
	void Save(Player& player);
private:

};




class Inventory
{
public: 
	std::string GetInventory() const;

private:
	std::vector<std::string>* inventory{};

};