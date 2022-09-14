#pragma once

#include "DynamicObject.h"

class Bomb : public DynamicObject
{
public:

	static const uint16_t BombCost = 10; // ��������� ����� � �����

	void Draw() const override;

	Bomb* clone() const override;

	Bomb() {};

	Bomb(const Bomb& pBomb);

private:

};

