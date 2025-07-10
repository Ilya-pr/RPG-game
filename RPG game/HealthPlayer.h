#pragma once
#include <iostream>
class Player;

class Health
{
public:
	double GetHp() const;
	double GetMaxHp() const;

	void Regeneration();
	void Hp(int damage);	

	void SetMaxHp(double newMax) { MaxHp = newMax; }
private:
	double hp = 100;
	double MaxHp = 100;
};