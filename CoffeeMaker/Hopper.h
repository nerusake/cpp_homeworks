#pragma once
#include <iostream>
#include <string>
class Hopper
{
public:
	double add = 0;
	double remove = 0;
	double beans = 0;
	double grounds = 0;
	double oneOzBeans = 4.5;
	double tenOzBeans = 45;
	double maxBeans = 45;

	void addBeans();
	void removeBeans();
	void grind();
};

