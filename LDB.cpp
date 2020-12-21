
#include "LDB.h"

void LDB::Execute()
{
    int temp;
    this->ali->setProgramCounter(this->ali->getProgramCounter() + 1);
    temp = this->ali->getSymbol(this->symbol);
    int k = this->ali->getMemory(temp)->getNumberFromINT();
    this->ali->setRegB(k);

}

void LDB::setSymbol(string sym)
{
    this->symbol = sym;
}

LDB::LDB(ALI* ali_)
        :ali(ali_)
{
}


LDB::~LDB()
{
}