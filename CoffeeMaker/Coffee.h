#pragma once
#include <iostream>
#include <string>
#include "HeatingElement.h"
#include "Hopper.h"
#include "Reservoir.h"
class Coffee
{
public:
	double cups;

	double beansAdded;
	double beansMax;

	Hopper* hop = new Hopper();
	Reservoir* res = new Reservoir();
	HeatingElement* heat = new HeatingElement();

	void runMachine();

	void brew();
};

