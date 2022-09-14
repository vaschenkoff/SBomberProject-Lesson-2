#include "TreeState.h"
#include "MyTools.h"
#include <iostream>
#include "Tree.h"

using namespace MyTools;

void SmallTree::Draw(const Tree* tree) const
{
    SetColor(CC_DarkGray);
    GotoXY(tree->GetX(), tree->GetY());
    std::cout << "||";
    SetColor(CC_LightGreen);
    GotoXY(tree->GetX() - 1, tree->GetY() - 1);
    std::cout << "//\\\\";
    GotoXY(tree->GetX(), tree->GetY() - 2);
    std::cout << "/\\";
}

void SmallTree::Grow(Tree* tree, uint16_t timePass)
{
    growTime += timePass;
    if (growTime > 3000)
    {
        tree->setState(new MediumTree);
    }

}

void MediumTree::Draw(const Tree* tree) const
{
    SetColor(CC_DarkGray);
    GotoXY(tree->GetX(), tree->GetY());
    std::cout << "||";
    SetColor(CC_LightGreen);
    GotoXY(tree->GetX() - 1, tree->GetY() - 1);
    std::cout << "/";
    SetColor(CC_DarkGray);
    GotoXY(tree->GetX(), tree->GetY() - 1);
    std::cout << "||";
    SetColor(CC_LightGreen);
    GotoXY(tree->GetX() + 2, tree->GetY() - 1);
    std::cout << "\\";
    SetColor(CC_LightGreen);
    GotoXY(tree->GetX() - 1, tree->GetY() - 2);
    std::cout << "//\\\\";
    GotoXY(tree->GetX(), tree->GetY() - 3);
    std::cout << "/\\";
}

void MediumTree::Grow(Tree* tree, uint16_t timePass)
{
    growTime += timePass;
    if (growTime > 6000)
    {
        tree->setState(new BigTree);
    }
}

void BigTree::Draw(const Tree* tree) const
{
    SetColor(CC_DarkGray);
    GotoXY(tree->GetX(), tree->GetY());
    std::cout << "||";
    SetColor(CC_LightGreen);
    GotoXY(tree->GetX() - 1, tree->GetY() - 1);
    std::cout << "/";
    SetColor(CC_DarkGray);
    GotoXY(tree->GetX(), tree->GetY() - 1);
    std::cout << "||";
    SetColor(CC_LightGreen);
    GotoXY(tree->GetX() + 2, tree->GetY() - 1);
    std::cout << "\\";
    SetColor(CC_LightGreen);
    GotoXY(tree->GetX() - 2, tree->GetY() - 2);
    std::cout << "//";
    SetColor(CC_DarkGray);
    GotoXY(tree->GetX(), tree->GetY() - 2);
    std::cout << "||";
    SetColor(CC_LightGreen);
    GotoXY(tree->GetX() + 2, tree->GetY() - 2);
    std::cout << "\\\\";
    GotoXY(tree->GetX() - 2, tree->GetY() - 3);
    std::cout << "///\\\\\\";
    GotoXY(tree->GetX() - 1, tree->GetY() - 4);
    std::cout << "//\\\\";
    GotoXY(tree->GetX(), tree->GetY() - 5);
    std::cout << "/\\";
}

void BigTree::Grow(Tree* tree, uint16_t timePass)
{
}