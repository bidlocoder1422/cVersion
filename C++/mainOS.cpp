#include <iostream>
#include <thread>
#include <string>
#include <conio.h>
#include "menu.h"
#include "Calculator.h"

using namespace std;

int main()
{
	int i = 0;
	Menu menu(0, true);
	
	int currentPosition = 1;
	while (true) {
		bool fl = 1;
		while (fl)
		{
			menu.printMenu(currentPosition);
			switch (_getch())
			{
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
			case 13:
			{
				fl = false;
			}
			}
		}

		if (currentPosition == 2)
		{
			system("cls");
			Calculator calculator;
		}
		if (currentPosition == menu.menuSize())
		{
			system("cls");
			cout << "GOODBYE" << endl;
			system("pause");
			return EXIT_SUCCESS;
		}
	}
	system("pause");
	return 0;
}