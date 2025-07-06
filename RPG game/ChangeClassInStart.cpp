
#include "ClassPlayer.h"
#include "ChangeClass.h"
#include <iostream>

void ChangeClassHero::ChangeClass() {
	std::cout << "\nÂûáåðèòå êëàññ ãåðîÿ:" << "\n1. Âîèí" << "\n2. Âîð" << "\n3. Ìàã" << "\n4. Ëó÷íèê" << "\n5. Áåðñåðê\n";
	int change;
	std::cin >> change;
	while (true) {
		std::string Class;
		switch (change) {
		case 1:  Class = "Voin"; break;
		case 2:  Class = "Vor"; break;
		case 3:  Class = "Mag"; break;
		case 4:  Class = "Lychnik"; break;
		case 5:  Class = "Berserk"; break;
		default: std::cout << "\nÂÛÁÅÐÈ ÍÎÐÌÀËÜÍÎ ÊËÀÑÑ, ÄÅÁÈË\n"; ChangeClassHero::ChangeClass();
		}

		std::cout << "\nÂû óâåðåíû?" << "\n1. Äà" << "\n2. Íåò\n";
		int a;
		std::cin >> a;
		switch (a) {
		case 1: ChangeClassHero::StatsClass(Class); return;
		case 2: ChangeClassHero::ChangeClass();
		default: std::cout << "\nÄÀ ÒÛ ÂÎÎÁÙÅ ÊÎÍ×ÅÍÛÉ ÄÅÁÈË, ÎÉ ÂÑ¨, ÈÄÈ ÍÀÕÓÉ"; exit(0);
		}
	}

}

void ChangeClassHero::StatsClass(std::string Class) {
	Player player;
	if (Class == "Voin") {
		std::string a = "fwerv";
		player.InventoryAdd(a);
		return;
	}
}