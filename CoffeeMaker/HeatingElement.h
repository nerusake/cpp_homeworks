#pragma once
#include <iostream>
#include <string>
class HeatingElement
{
public:
	double temp = 75;
	double maxTemp = 185;

	void heatUp();
	void coolDown();
};

