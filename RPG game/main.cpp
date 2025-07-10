
#include "Header.h"
#include "ClassPlayer.h"
#include "ClassMonster.h"
#include "ChangeClass.h"





int main() {
	setlocale(LC_ALL, "RU");
	Player player;
	
	player.LVLUP();
	

	player.GetMaxHp();
	player.Regeneration();

	player.InfoPlayer();


}

