#include "HeatingElement.h"
#include <chrono>
#include <thread>

void HeatingElement::heatUp()
{
	std::cout << "Heating water from 75F to 185F." << std::endl;
	Heating:
	if (temp < maxTemp)
	{
		temp += 10;
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
		goto Heating;
	}
	else
	{
		std::cout << "Water has been heated to 185F." << std::endl;
	}
}
void HeatingElement::coolDown()
{
	temp = 75;
}