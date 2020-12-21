//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "STR.h"
#include"INT.h"


void STR::Execute()
{
    this->ali->setProgramCounter(this->ali->getProgramCounter() + 1);
    int temp = this->ali->getSymbol(this->sym);
    delete this->ali->getMemory(temp);
    SAL *value = new INT(this->ali, this->ali->getRegA());
    this->ali->setMemory(temp, value);

}

void STR::Print()
{

}

int STR::getSymbol(string sym)
{
    return this->ali->getSymbol(sym);
}

void STR::setSymbol(string s)
{
    this->sym = s;
}

void STR::storeSymbolAt(int index, SAL*object)
{
    this->ali->setMemory(index, object);
}

STR::STR(ALI* ali_)
        :ali(ali_)
{
}


STR::~STR()
{
}