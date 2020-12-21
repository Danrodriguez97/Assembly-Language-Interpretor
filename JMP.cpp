//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "JMP.h"

void JMP::Execute()
{
    this->ali->setProgramCounter(this->num );
}

void JMP::setNumber(int n)
{
    this->num = n;
}

JMP::JMP(ALI* ali_)
        :ali(ali_)
{
}


JMP::~JMP()
{
}