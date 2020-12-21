//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "JVS.h"

void JVS::Execute()
{
    int temp = this->ali->getOverflowBit();
    if (temp > 0) {
        this->ali->setProgramCounter(this->num);
    }
    else {
        this->ali->setProgramCounter(this->ali->getProgramCounter() + 1);
    }
}

void JVS::setNumber(int n)
{
    this->num = n;
}

JVS::JVS(ALI* ali_)
        :ali(ali_)
{
}


JVS::~JVS()
{
}