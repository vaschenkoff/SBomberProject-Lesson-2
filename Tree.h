#pragma once
#include "DynamicObject.h"

class TreeState;

class Tree : public DynamicObject
{
public:
	Tree(TreeState* state);

	void Draw() const override;

	Tree* clone() const override;

	void Move(uint16_t time) override;

	void setState(TreeState* state);
private:

	TreeState* _state;
};