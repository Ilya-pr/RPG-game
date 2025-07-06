#pragma once
#include <string>

class Monster
{
public:
	double GetHp() const;
	int GetLVL() const;
	double GetDamage() const;
	void LVLUP();
private:


};


class Goblin : Monster
{
public:

private:
	double hp = 60;
	int lvl = 1;
	double damage = 9;
};
