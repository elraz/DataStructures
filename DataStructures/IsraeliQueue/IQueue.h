#pragma once

using namespace  std;

template<typename T>
class IQueue
{
public:
    /**
     * Constructor
     */
    IQueue() = default;

    /**
     * Destructor
     */
    virtual ~IQueue() = default;

    /**
    * This method push element into the queue
    */
    virtual void Push(T element , T freindElement) = 0;

    /**
    * This method remove the first element in queue
    */
    virtual void Pop() = 0;
};