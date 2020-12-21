//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_JMP_H
#define UNTITLED1_JMP_H


#include "SAL.h"
#include "ALI.h"

using namespace std;


class JMP :
        public SAL
{
private:
    ALI * ali;
    int num;
public:
    void Execute();
    void setNumber(int);
    JMP(ALI*);
    ~JMP();
};


#endif //UNTITLED1_JMP_H
