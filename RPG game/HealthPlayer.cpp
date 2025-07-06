#include "HealthPlayer.h"


double Health::GetHp() const { return hp; };


void Health::Regeneration() {
	if (hp < MaxHp) {
		hp += hp * 0.01;
	}
	else if (hp > MaxHp)
	{
		hp = MaxHp;
	}
}

void Health::Hp(int damage) {
	hp = hp - damage;
}