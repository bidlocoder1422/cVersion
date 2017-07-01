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
		menu.insert(menu.end(), buf);
	}
}

void Menu::printMenu(int currentPosition)
{
	system("cls");
	currentPosition--;
	cout << "Personal OS v0.0 \nDeveloper beta 0\n\n" << endl;
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


int Menu::menuSize()
{
	return menu.size();
}

Menu::~Menu()
{
	this->accessLevel = NULL;
	this->currentPosition = NULL;
	this->suRoots = NULL;
}
