
#include <iostream>

#include "Bomb.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

void Bomb::Draw() const
{
    MyTools::SetColor(CC_LightMagenta);
    GotoXY(x, y);
    cout << "*";
}

Bomb* Bomb::clone() const
{
    return new Bomb(*this);
}

Bomb::Bomb(const Bomb& pBomb)
{
    SetPos(xDirction - 1, yDirection);
}