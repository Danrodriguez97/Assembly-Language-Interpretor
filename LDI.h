//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_LDI_H
#define UNTITLED1_LDI_H

#include "SAL.h"
#include "ALI.h"

class LDI :
        public SAL
{
private:
    ALI * ali;
    int num;
public:
    void Print();
    void Execute();
    void setNumber(int num);
    int getNumber()const;
    LDI(ALI*);
    LDI(int n);
    ~LDI();
};


#endif //UNTITLED1_LDI_H
