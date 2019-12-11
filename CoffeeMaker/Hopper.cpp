#include "Hopper.h"
void Hopper::addBeans()
{
	std::cout << "45 beans makes 10oz of grounds." << std::endl;
	std::cout << "How many beans would you like to add?" << std::endl;
	std::cin >> add;
	beans += add;
}
void Hopper::removeBeans()
{
	std::cout << "How many beans would you like to remove?" << std::endl;
	std::cin >> remove;

	beans -= remove;
}

void Hopper::grind()
{
	std::cout << "The beans have been ground." << std::endl;
	grounds = beans / oneOzBeans;
	beans = 0;
}