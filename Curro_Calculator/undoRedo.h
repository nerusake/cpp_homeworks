#pragma once
#include <stack>
#include <iostream>
class undoRedo
{
public:
	undoRedo();
	~undoRedo();

	std::stack<double> undo;
	std::stack<double> redo;

	void pushUndo(double result);
	void showUndo();
	void showRedo();
	void emptyRedo();

};