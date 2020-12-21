//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_ADD_H
#define UNTITLED1_ADD_H

#include "SAL.h"
#include "ALI.h"
#include <string>
#include <cmath>

using namespace std;

class ADD :
        public SAL
{
private:
    ALI * ali;
public:
    void Execute();
    ADD(ALI*);
    ~ADD();
};


#endif //UNTITLED1_ADD_H
