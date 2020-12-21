//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_HLT_H
#define UNTITLED1_HLT_H

#include "SAL.h"
#include"ALI.h"
class HLT :
        public SAL
{
private:
    ALI * ali;
public:
    void Execute();
    HLT(ALI*);
    ~HLT();
};


#endif //UNTITLED1_HLT_H
