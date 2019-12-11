#pragma once
#include <iostream>
#include <string>
class Reservoir
{
public:
	double add;
	double remove;
	double maxWater = 1;
	double water = 0;

	void addWater();
	void removeWater();
};

