
#include <iostream>

#include "Bomb.h"
#include "FileLoggerSingletone.h"
#include "Screensingletone.h"


using namespace std;


void Bomb::Draw() const
{
    ScreenSingleton::getInstance().SetColor(CC_LightMagenta);
    ScreenSingleton::getInstance().GotoXY(x, y);
    cout << "*";
}