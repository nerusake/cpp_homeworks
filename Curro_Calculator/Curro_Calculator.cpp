// Curro_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include "calculator.h"
#include "undoRedo.h"
#include <stack>


int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	undoRedo* urfunc = new undoRedo();

    std::cout << "Welcome to Calculator!\n";
	std::cout << "Please enter your desired calculation using the proper format: x+y | x-y | x*y | x/y\nType u to undo and r to redo.";

	calculator c;
	while (true)
	{
		std::cin >> x >> oper >> y;

		switch (oper)
		{
		case '+':
			result = x + y;
			std::cout << "Result: " << result << std::endl;
			urfunc->pushUndo(result);
			break;
		case '-':
			result = x - y;
			std::cout << "Result: " << result << std::endl;
			urfunc->pushUndo(result);
			break;
		case '*':
			result = x * y;
			std::cout << "Result: " << result << std::endl;
			urfunc->pushUndo(result);
			break;
		case '/':
			result = x / y;
			std::cout << "Result: " << result << std::endl;
			urfunc->pushUndo(result);
			break;
		case 'u':
			urfunc->showUndo();
			break;
		case 'r':
			urfunc->showRedo();
			break;
		default:
			return 0;
		}

		/*std::cin >> x >> oper >> y;
		if (oper == '/' && y == 0)
		{
			std::cout << "Division by 0 is impossible" << std::endl;
			continue;
		}
		else
		{
			result = c.Calculate(x, oper, y);
		}
		std::cout << "Result: " << result << std::endl;*/
	}
	delete(urfunc);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
