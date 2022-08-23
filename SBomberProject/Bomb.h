#pragma once
#include <iostream>
#include "DynamicObject.h"
#include "Screensingletone.h"



class Bomb : public DynamicObject
{
public:

	static const uint16_t BombCost = 10; // ��������� ����� � �����

	void Draw() const override;

	virtual ~Bomb() {}

private:

};

class BombDecorator : public Bomb {
private:
	Bomb* pBomb;
public:
	BombDecorator(Bomb* pBomb, const int speed) : pBomb(pBomb) {
		pBomb->SetSpeed(speed);
	}

	void Move(uint16_t time) override {
		pBomb->Move(time);
	}

	void Draw() const override {
		pBomb->Draw();
		ScreenSingleton::getInstance().GotoXY(pBomb->GetX(), pBomb->GetY() - 1);
		std::cout << "|";
	}

	void SetPos(double nx, double ny) override {
		pBomb->SetPos(nx, ny);
	}

	virtual void SetWidth(uint16_t widthN) {
		pBomb->SetWidth(widthN);
	}

	uint16_t GetWidth() const override {
		return pBomb->GetWidth();
	}

	double GetY() const override {
		return pBomb->GetY();
	}

	double GetX() const override {
		return pBomb->GetX();
	}
};
