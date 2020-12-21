//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "LDI.h"


void LDI::Print()
{
}

void LDI::Execute()
{
    this->ali->setProgramCounter(this->ali->getProgramCounter() + 1);
    this->ali->setRegA(this->num);
}

void LDI::setNumber(int n)
{
    this->num = n;
}

int LDI::getNumber() const
{
    return this->num;
}

LDI::LDI(ALI* ali_)
        :ali(ali_)
{
}

LDI::LDI(int n)
        :ali(new ALI()), num(n)
{
}


LDI::~LDI()
{
}