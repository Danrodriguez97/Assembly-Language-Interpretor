//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "XCH.h"

void XCH::Execute()
{
    int temp = this->ali->getRegA();
    this->ali->setProgramCounter(this->ali->getProgramCounter() + 1);
    this->ali->setRegA(this->ali->getRegB());
    this->ali->setRegB(temp);
}

void XCH::Print()
{
}

XCH::XCH(ALI* ali_)
        :ali(ali_)
{
}

XCH::~XCH()
{
    this->ali = nullptr;
}