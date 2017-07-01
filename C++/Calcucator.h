#pragma once
#include <iostream>
#include <string>
#include <thread>
#include "personalOStypes.h"
#include <vector>

using namespace std;

class Calcucator
{
	string unslpitedEquation;
	vector<char> splitedEquation;
	vector<string> bufForBrackets;
	vector<char> splitedBrackets; 
public:
	mathOperations returnOperation();
	/*Calcucator();
	~Calcucator();*/
	void scanEquation();
};

