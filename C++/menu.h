/*
	Main OS Menu
	Current version: 1.0
	Last Updte: 29.06.2017
*/


#include<thread>
#include<iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;

class Menu
{
private:
	vector<string> menu;
	int accessLevel, currentPosition;
	bool suRoots;
public:
	Menu(int const &accessLevel, bool suRoots = false);
	void printMenu(int currentPosition=0);
	~Menu();	
};

