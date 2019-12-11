#include "Reservoir.h"
void Reservoir::addWater()
{
	std::cout << "How many cups of water would you like to add?" << std::endl;
	std::cin >> add;
	water += add;
}
void Reservoir::removeWater()
{
	std::cout << "How many cups of water would you like to remove?" << std::endl;
	std::cin >> remove;
	water -= remove;
}