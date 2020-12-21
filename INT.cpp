//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "INT.h"

INT::INT(ALI* ali_, int n)
        :ali(ali_), num(n)
{
}

int INT::getNumberFromINT()
{
    return this->num;
}


INT::~INT()
{
}