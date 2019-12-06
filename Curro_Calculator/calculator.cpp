#include "calculator.h"
#include "undoRedo.h"
#include <stack>
#include <iostream>

double calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0;
	}
}
