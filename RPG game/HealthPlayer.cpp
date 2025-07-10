#include "HealthPlayer.h"
#include <iostream>

double Health::GetHp() const { return hp; };
double Health::GetMaxHp() const { return MaxHp; };


void Health::Regeneration() {

	if (hp < MaxHp) {
		hp += MaxHp * 0.01;
	}
	else if (hp > MaxHp)
	{
		hp = MaxHp;
	}
	
}

void Health::Hp(int damage) {
	hp = hp - damage;
}



