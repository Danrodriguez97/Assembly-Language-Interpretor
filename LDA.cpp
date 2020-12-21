#include "LDA.h"

void LDA::Execute()
{
    int temp;
    this->ali->setProgramCounter(this->ali->getProgramCounter() + 1);
    temp = this->ali->getSymbol(this->symbol);
    int k = this->ali->getMemory(temp)->getNumberFromINT();

    this->ali->setRegA(k);

}

void LDA::setSymbol(string sym)
{
    this->symbol = sym;
}

LDA::LDA(ALI* ali_)
        :ali(ali_)
{
}

LDA::~LDA()
{
}