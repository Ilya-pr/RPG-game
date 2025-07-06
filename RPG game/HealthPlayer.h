#pragma once

class Player;

class Health
{
public:
	double GetHp() const;

	void Regeneration();
	void Hp(int damage);

	Player *PlayerPtr;
private:

	double hp = 100;
	double MaxHp = 100;
};