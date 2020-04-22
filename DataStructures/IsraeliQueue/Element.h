#pragma once
#include <memory>
#include "IElement.h"

using namespace std;
class Element : public IElement
{
public:
   
    Element(unsigned int priorety);
    virtual ~Element() = default;
    virtual void AssignFriend(shared_ptr<IElement> friendElement) override;
    virtual shared_ptr<IElement> GetFreind() override;
    virtual unsigned int GetPriorety() override;
protected:
    unsigned int myPriorety;
    shared_ptr<IElement> myFreind{ nullptr };
};