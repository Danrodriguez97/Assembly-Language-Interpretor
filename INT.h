//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_INT_H
#define UNTITLED1_INT_H


#include "SAL.h"
#include"ALI.h"

using namespace std;

class INT :
        public SAL
{
    ALI * ali;
    int num;
public:
    INT(ALI*, int);
    int getNumberFromINT();

    ~INT();
};


#endif //UNTITLED1_INT_H
