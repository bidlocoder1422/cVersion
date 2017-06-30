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
	int currentPosition = 0;
	while (fl) {
		menu.printMenu(currentPosition);
		switch (getch()) {
			case 72:

		}
	}
	system("pause");
	return 0;
}