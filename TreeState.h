#pragma once
#include <cstdint>


class Tree;


class TreeState
{
public:

	TreeState() : growTime(0) {};
	virtual ~TreeState() {};

	virtual void Draw(const Tree* tree) const = 0;
	virtual void Grow(Tree* tree, uint16_t timePass) = 0;

protected:
	uint16_t growTime;
};

class SmallTree : public TreeState
{
	virtual void Draw(const Tree* tree) const override;
	virtual void Grow(Tree* tree, uint16_t timePass) override;
};
class MediumTree : public TreeState
{
	virtual void Draw(const Tree* tree) const override;
	virtual void Grow(Tree* tree, uint16_t timePass) override;
};
class BigTree : public TreeState
{
	virtual void Draw(const Tree* tree) const override;
	virtual void Grow(Tree* tree, uint16_t timePass) override;
};