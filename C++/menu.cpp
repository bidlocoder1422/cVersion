#include "menu.h"


Menu::Menu(int const & accessLevel, bool suRoots)
{
	this->accessLevel = accessLevel;
	this->currentPosition = 0;
	this->suRoots = suRoots;
	ifstream menuInputFile;
	menuInputFile.open("menu.txt");
	while (!menuInputFile.eof()) {
		string buf; menuInputFile >> buf;
		menu.insert(menu.begin(), buf);
	}
}

void Menu::printMenu(int currentPosition)
{
	currentPosition--;
	int iter = 0;
	for (auto i : menu) {
		if (iter==currentPosition) 
		{
			cout << ">  ";
		}	
		cout << i << endl;
		iter++;
	}
}

Menu::~Menu()
{
	this->accessLevel = NULL;
	this->currentPosition = NULL;
	this->suRoots = NULL;
}
