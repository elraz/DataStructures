#include "IsraeliQueue.h"
#include <algorithm> 

using namespace std;
IsraeliQueue::IsraeliQueue()
{
    myElementList = make_shared<list<shared_ptr<IElement>>>();
}

void IsraeliQueue::Push(shared_ptr<IElement> element, shared_ptr<IElement> friendElement)
{
    //if the list empty, just push
    if (myElementList->empty())
    {
        myElementList->push_front(element);
        return;
    }
    // need to to find who is in lower location in queue - priorety index or freind index
    unsigned int Location;
    auto PrioretyLocation = GetPrioretyLocationInQueue(element->GetPriorety());
    unsigned int freindLocation;

    if (GetFriendLocationInQueue(friendElement, freindLocation))
    {
        Location = std::min(PrioretyLocation, freindLocation);
    }
    else 
    {
         Location = PrioretyLocation;
    }
    insertElementIntoTheList(element, Location);
}

void IsraeliQueue::Pop()
{
    myElementList->pop_front();
}

bool IsraeliQueue::GetFriendLocationInQueue(shared_ptr<IElement> friendElement, unsigned int & friendLocation)
{
    unsigned int location = 1;
    for (auto const& i : *myElementList)
    {
        if (i == friendElement) 
        {
            friendLocation = location;
            return true;
        }
        location++;
    }
    return false;
}

unsigned int IsraeliQueue::GetPrioretyLocationInQueue(unsigned int priorety)
{
    unsigned int location = 1;
    for (auto const& i : *myElementList)
    {
        if (priorety > i->GetPriorety())
        {
            return location;
        }
        location++;
    }
    return location;
}

void IsraeliQueue::insertElementIntoTheList(shared_ptr<IElement> element, unsigned int location)
{
    auto it = myElementList->begin();
    for (auto i = 1; i < location; i++)
    {
        it++;
    }
    myElementList->insert(it, element);
}

