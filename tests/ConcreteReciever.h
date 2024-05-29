#ifndef CONCRETERECIEVER_H
#define CONCRETERECIEVER_H
#include <iostream>
using std::cout;
using std::endl;

class ConcreteReciever
{

public:
    ConcreteReciever(){}
    virtual void insertCoin() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
};

#endif // CONCRETERECIEVER_H
