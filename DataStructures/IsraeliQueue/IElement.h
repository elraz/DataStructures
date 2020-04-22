#pragma once
#include <memory>
using namespace  std;
class IElement
{
public:
    /**
     * Constructor
     */
    IElement() = default;
    

    /**
     * Destructor
     */
    virtual ~IElement() = default;

    /**
     * This method Assign Friend element
     * @param input FriendElement
     */
    virtual void AssignFriend(shared_ptr<IElement> FriendElement) = 0;
    
    /**
    * This method return the Assigned Friend
    * @param Return shared_ptr<IElement>
    */
    virtual shared_ptr<IElement> GetFreind( ) = 0;

    virtual unsigned int GetPriorety() = 0;

};