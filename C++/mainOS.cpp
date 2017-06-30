#include <iostream>
#include <thread>
#include <string>
#include <conio.h>
#include "menu.h"
using namespace std;

int main()
{
	int i = 0;
	Menu menu(0, true);
	bool fl = 1;
	int currentPosition = 1;
	while (fl) {
		menu.printMenu(currentPosition);
		switch (_getch()) {
			case 72:
			{
				if (currentPosition != 0) currentPosition--;
				break;
			}
			case 80:
			{
				if (menu.menuSize() != currentPosition) currentPosition++;
				break;
			}
		}
	}
	system("pause");
	return 0;
}