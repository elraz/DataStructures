#include "Element.h"

Element::Element(unsigned int priorety)
{
    myPriorety = priorety;
}

void Element::AssignFriend(shared_ptr<IElement> friendElement)
{
    myFreind = friendElement;
}

shared_ptr<IElement> Element::GetFreind()
{
    return myFreind;
}

unsigned int Element::GetPriorety()
{
    return myPriorety;
}

