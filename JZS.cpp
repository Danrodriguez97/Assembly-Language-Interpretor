//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "JZS.h"

void JZS::Execute()
{
    int temp = this->ali->getZeroBit();
    if (temp > 0) {
        this->ali->setProgramCounter(this->num);
    }
    else {
        this->ali->setProgramCounter(this->ali->getProgramCounter() + 1);
    }
}

void JZS::setNumber(int n)
{
    this->num = n;
}

JZS::JZS(ALI* ali_)
        : ali(ali_)
{
}


JZS::~JZS()
{
}