#include "Calculator.h"

double Calculator::equationResult()
{
	
	for (auto i: this->splitedEquation) 
	{
		if (i == '(')
		{
			string bufForCurrentBracker;
			while (i!=')')
			{
				bufForCurrentBracker.push_back(i);
			}
			bufForBrackets.push_back(bufForCurrentBracker);
		}
	}
}


Calculator::Calculator()
{
	cout << "Input equation and press enter: ";
	cin >> unslpitedEquation;
	for (auto i : unslpitedEquation) 
	{
		splitedEquation.push_back(i);
	}
}
