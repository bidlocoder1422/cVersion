#pragma once
#include <iostream>
#include <string>
#include <thread>
#include "personalOStypes.h"
#include <vector>

using namespace std;

class Calculator
{
	string unslpitedEquation;
	vector<char> splitedEquation;
	vector<string> bufForBrackets;
	vector<char> splitedBrackets; 
	vector<int> bufResults;
public:
	mathOperations returnOperation();
	double equationResult();
	Calculator();
	//~Calcucator();
};

