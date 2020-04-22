#pragma once
#include "IElement.h"
#include"IQueue.h"
#include <list>
#include <memory>


using namespace  std;

class IsraeliQueue : public IQueue<shared_ptr<IElement>>
{
public:
    /**
     * Constructor
     */
    IsraeliQueue();

    /** 
     * Destructor
     */
    virtual ~IsraeliQueue() = default;

    /**
    * This method push element into the queue
    */
    virtual void Push(shared_ptr<IElement> element , shared_ptr<IElement> freindElement) override;

    /**
    * This method remove the first element in queue
    */
    virtual void Pop() override;
protected:
    bool GetFriendLocationInQueue(shared_ptr<IElement> freindElement, unsigned int &freindLocation);
    unsigned int GetPrioretyLocationInQueue(unsigned int priorety);
    void insertElementIntoTheList(shared_ptr<IElement> element , unsigned int location);
    shared_ptr<list<shared_ptr<IElement>>> myElementList;

};