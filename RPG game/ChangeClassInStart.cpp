
#include "ClassPlayer.h"
#include "ChangeClass.h"
#include <iostream>

void ChangeClassHero::ChangeClass() {
	std::cout << "\n�������� ����� �����:" << "\n1. ����" << "\n2. ���" << "\n3. ���" << "\n4. ������" << "\n5. �������\n";
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
		default: std::cout << "\n������ ��������� �����, �����\n"; ChangeClassHero::ChangeClass();
		}

		std::cout << "\n�� �������?" << "\n1. ��" << "\n2. ���\n";
		int a;
		std::cin >> a;
		switch (a) {
		case 1: ChangeClassHero::StatsClass(Class); return;
		case 2: ChangeClassHero::ChangeClass();
		default: std::cout << "\n�� �� ������ �������� �����, �� �Ѩ, ��� �����"; exit(0);
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