#include "Tree.h"
#include "TreeState.h"

Tree::Tree(TreeState* state) : _state(state) {}

void Tree::Draw() const
{
    if (_state)
    {
        _state->Draw(this);
    }
}

void Tree::Move(uint16_t time)
{
    if (_state)
    {
        _state->Grow(this, time);
    }
}

void Tree::setState(TreeState* state)
{
    _state = state;
}


Tree* Tree::clone() const
{
    return new Tree(*this);
}