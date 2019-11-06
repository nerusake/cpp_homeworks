// Curro_Battleship.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

const int boardSize = 8;
const int rows = boardSize;
const int columns = boardSize;
const int numShips = 10;

int matrix[rows][columns];

void TakeSize()
{
	//matrix takes const only, need to change to another array type probably
}

void Clear()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

void Show()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int NumberOfShips()
{
	int c = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (matrix[i][j] == 1)
			{
				c++;
			}
		}
	}
	return c;
}

void SetShips()
{
	int s = 0;
	while (s < numShips)
	{
		int x = rand() % rows;
		int y = rand() % columns;
		if (matrix[x][y] != 1)
		{
			s++;
			matrix[x][y] = 1;
		}
	}
}

bool Attack(int x, int y)
{
	if (matrix[x][y] == 1)
	{
		matrix[x][y] = 2;
		return true;
	}
	return false;
}

void Welcome()
{
	std::cout << "Welcome to Battleship\n\n";
	std::cout << "The rules are simple. First, choose your board size (8-100).\nThe computer will randomly place 10 single-square ships.\nAfter that, it's up to you to guess where the ships are placed.\nSet your target (ex. \"7 12\") and you'll see if you hit a ship, \nmissed entirely, or missed by one square in any direction.\n\n";
}

int main()
{
	srand(time(NULL));

	Welcome();
	Clear();
	SetShips();
	Show();
	int pos1, pos2;
	while (1)
	{
		std::cout << "Enter target: "; std::cin >> pos1 >> pos2;
		if (Attack(pos1-1, pos2-1))
			std::cout << "Hit!" << std::endl;
		else
			std::cout << "Miss!" << std::endl;
		std::cout << "Ships Remaining: " << NumberOfShips() << std::endl;
	}

	std::cout << "Game Over" << std::endl;
	Show();
	
	system("pause");
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
