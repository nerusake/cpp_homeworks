// CoffeeMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Coffee.h"

int main()
{
	
	Coffee* coffee = new Coffee();
	Hopper* hop = new Hopper();
	Reservoir* res = new Reservoir();

	/*int menuChoice = 0;
	bool running = true;
	int userInput = 0;

	std::cout << "Every 1 cup of coffee requires 10oz of grounds and 1 cup of water." << std::endl;
	std::cout << std::endl;

	do {

	Restart:
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << "Press 1 to brew coffee." << std::endl;
		std::cout << "Press 2 to add coffee beans." << std::endl;
		std::cout << "Press 3 to remove coffee beans." << std::endl;
		std::cout << "Press 4 to add water." << std::endl;
		std::cout << "Press 5 to remove water." << std::endl;
		std::cout << "Press any other key to turn off the coffee maker." << std::endl;
		std::cout << "----------------------------------------------------" << std::endl;

		std::cin >> menuChoice;
		switch (menuChoice)
		{
		case 1:
			coffee->brew();
			goto Restart;
		case 2:
			hop->addBeans();
			std::cout << hop->add << std::endl;

			goto Restart;
		case 3:
			hop->removeBeans();
		case 4:
			res->addWater();
			goto Restart;
		case 5:
			res->removeWater();
		default:
			running = false;
			break;
		}

	} while (running == true);*/
	Coffee* c = new Coffee();

	c->runMachine();

	std::cout << "Goodbye" << std::endl;
	delete c;
	delete res;
	delete hop;

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
