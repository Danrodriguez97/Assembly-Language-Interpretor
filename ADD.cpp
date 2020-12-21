//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "ADD.h"
#include <cmath>

void ADD::Execute()
{
    int32_t tempA, tempB, temp, pOverflow, nOverflow, num;
    this->ali->setProgramCounter(this->ali->getProgramCounter() + 1);
    tempA = this->ali->getRegA();
    tempB = this->ali->getRegB();
    this->ali->setRegA(tempA + tempB);
    pOverflow = (int)pow(2, 31) - 1;
    nOverflow = (int)pow(2, 31)*(-1);
    num = this->ali->getRegA();

    if (tempA > 0 && tempB > pOverflow - tempA) {
        num = tempA + tempB;
        this->ali->setOverflowBit(1);
        this->ali->setRegA(num);
    }
    else if (tempA < 0 && tempB < nOverflow - tempA) {
        num = tempA + tempB;
        this->ali->setRegA(num);
        this->ali->setOverflowBit(1);
    }
    else {
        this->ali->setOverflowBit(0);
    }

    temp = this->ali->getRegA();

    if (temp == 0) {
        this->ali->setZeroBit(1);
    }
    else {
        this->ali->setZeroBit(0);
    }
}

ADD::ADD(ALI* ali_)
        : ali(ali_)
{
}


ADD::~ADD()
{
}