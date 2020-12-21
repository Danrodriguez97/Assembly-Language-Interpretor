//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_JZS_H
#define UNTITLED1_JZS_H

#include "SAL.h"
#include"ALI.h"

using namespace std;

class JZS :
        public SAL
{
private:
    ALI * ali;
    int num;
public:
    void Execute();
    void setNumber(int);
    JZS(ALI *);
    ~JZS();
};


#endif //UNTITLED1_JZS_H
