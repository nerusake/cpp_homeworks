#include "undoRedo.h"

undoRedo::undoRedo()
{

}

undoRedo::~undoRedo()
{

}

void undoRedo::pushUndo(double result)
{
	undo.push(result);
}

void undoRedo::emptyRedo()
{
	while (!redo.empty())
	{
		redo.pop();
	}
}

void undoRedo::showUndo()
{
	if (undo.empty())
	{
		std::cout << "No Undo History" << std::endl;
	}
	else
	{
		std::cout << undo.top() << std::endl;
		redo.push(undo.top());
		undo.pop();
	}
}

void undoRedo::showRedo()
{
	if (redo.empty())
	{
		std::cout << "No Redo History" << std::endl;
	}
	else
	{
		std::cout << redo.top() << std::endl;
		undo.push(redo.top());
		redo.pop();
	}
}