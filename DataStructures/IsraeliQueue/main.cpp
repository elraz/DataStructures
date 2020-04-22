// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include "Element.h"
#include "IElement.h"
#include "IsraeliQueue.h"


int main()
{
    auto queue = IsraeliQueue();
    auto element1 = make_shared<Element>(1);
    auto element2 = make_shared<Element>(2);
    auto element3 = make_shared<Element>(3);
    auto element4 = make_shared<Element>(4);
    auto element5 = make_shared<Element>(5);
    queue.Push(element5, nullptr);
    queue.Push(element4, nullptr);
    queue.Push(element3, element5);
    queue.Push(element1, element3);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
