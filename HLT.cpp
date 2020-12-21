//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "HLT.h"

void HLT::Execute()
{
    this->ali->setProgramCounter(this->ali->getProgramCounter() + 1);
}

HLT::HLT(ALI* ali_)
        :ali(ali_)
{
}


HLT::~HLT()
{
}