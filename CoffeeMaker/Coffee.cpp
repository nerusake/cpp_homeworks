#include "Coffee.h"
void Coffee::brew()
{
	

	std::cout << "How many cups of coffee would you like to make?" << std::endl;
	std::cin >> cups;

	hop->maxBeans = hop->maxBeans * cups;
	res->maxWater = res->maxWater * cups;
	/*std::cout << hop->maxBeans << std::endl;
	std::cout << hop->beans << std::endl;
	std::cout << res->maxWater << std::endl;
	std::cout << res->water << std::endl;*/
	

	if (hop->beans == hop->maxBeans)
	{
		if (res->water == res->maxWater)
		{
			hop->grind();

			heat->heatUp();
			
			std::cout << "Brewing coffee..." << std::endl;

			std::cout << "Brewed " << cups << " cups of coffee." << std::endl;
			res->water = 0;
		}
		else if (res->water < res->maxWater)
		{
			std::cout << "Not enough water in the reservoir." << std::endl;
		}
		else
		{
			std::cout << "Too much water in the reservoir." << std::endl;
		}
	}
	else if (hop->beans < hop->maxBeans)
	{
		std::cout << "Not enough beans in the hopper." << std::endl;
	}
	else
	{
		std::cout << "Too many beans in the hopper." << std::endl;
	}

	res->maxWater = 1;
	hop->maxBeans = 45;
}

void Coffee::runMachine()
{
	int menuChoice = 0;
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
		std::cout << "There are currently " << hop->beans << " beans and " << res->water << " cups of water in the machine." << std::endl;

		std::cin >> menuChoice;
		switch (menuChoice)
		{
		case 1:
			brew();
			goto Restart;
		case 2:
			hop->addBeans();
			std::cout << hop->add << std::endl;

			goto Restart;
		case 3:
			hop->removeBeans();
			goto Restart;
		case 4:
			res->addWater();
			goto Restart;
		case 5:
			res->removeWater();
			goto Restart;
		default:
			running = false;
			break;
		}

	} while (running == true);
}