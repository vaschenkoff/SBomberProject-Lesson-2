#include <iostream>
#include "TankAdaptee.h"

#include "TankAdaptee.h"
#include "Screensingletone.h"

bool TankAdaptee::isInRange(double x1, double x2) const {
	const double XBeg = x + 2;
	const double XEnd = x + width - 1;

	if (x1 < XBeg && x2 > XEnd) {
		return true;
	}

	if (x1 > XBeg && x1 < XEnd) {
		return true;
	}

	if (x2 > XBeg && x2 < XEnd) {
		return true;
	}
	return false;
}

void TankAdaptee::Paint() {
	ScreenSingleton::getInstance().SetColor(CC_Brown);

	ScreenSingleton::getInstance().GotoXY(x, y - 3);
	std::cout << "    #####";
	ScreenSingleton::getInstance().GotoXY(x - 2, y - 2);
	std::cout << "#######   #";
	ScreenSingleton::getInstance().GotoXY(x, y - 1);
	std::cout << "    #####";
	ScreenSingleton::getInstance().GotoXY(x, y);
	std::cout << " ###########";
}

uint16_t TankAdaptee::GetScore() const {
	return score;
}

void TankAdaptee::SetPos(double nx, double ny) {
	x = nx; y = ny;
}

double TankAdaptee::GetY() const {
	return y;
}

double TankAdaptee::GetX() const {
	return x;
}

void TankAdaptee::SetWidth(uint16_t widthN) {
	width = widthN;
}

uint16_t TankAdaptee::GetWidth() const {
	return width;
}