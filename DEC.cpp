//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "DEC.h"

void DEC::Execute()
{
    this->ali->setProgramCounter(this->ali->getProgramCounter() + 1);
    this->ali->setSymbol(this->var, this->address);
}

void DEC::setVar(string myVar)
{
    this->var = myVar;
}

void DEC::setAddress(int num)
{
    this->address = num;
}

string DEC::getVar()
{
    return this->var;
}

DEC::DEC(ALI* ali_)
        :ali(ali_)
{
}


DEC::~DEC()
{
}
