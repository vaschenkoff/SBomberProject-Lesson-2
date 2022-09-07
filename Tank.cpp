
#include <iostream>

#include "Tank.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

bool Tank::isInside(double x1, double x2) const
{
	const double XBeg = x + 2;
	const double XEnd = x + width - 1;

	if (x1 < XBeg && x2 > XEnd)
	{
		return true;
	}

	if (x1 > XBeg && x1 < XEnd)
	{
		return true;
	}

	if (x2 > XBeg && x2 < XEnd)
	{
		return true;
	}

	return false;
}

void Tank::Draw() const
{
	MyTools::SetColor(CC_Brown);
	GotoXY(x, y - 3);
	cout << "    #####";
	GotoXY(x - 2, y - 2);
	cout << "#######   #";
	GotoXY(x, y - 1);
	cout << "    #####";
	GotoXY(x, y);
	cout << " ###########";
}

std::vector<std::string>Tank::messages
{
	"This is not England, you need to dig deeper.",
	"If you fornicate— I'll launch a rocket.",
	"Here you won't find it there!",
	"That you sleep standing up on the move.",
	"I feel good, but not well.",
	"Johnny, they're in the trees!"
};


void Tank::addToQueue() {
	_mediator->addToQueue(messages[Roll(0, 5)]);
}