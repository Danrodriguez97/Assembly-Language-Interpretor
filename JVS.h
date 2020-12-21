//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_JVS_H
#define UNTITLED1_JVS_H

#include"SAL.h"
#include"ALI.h"

using namespace std;

class JVS :
        public SAL
{
private:
    ALI * ali;
    int num;
public:
    void Execute();
    void setNumber(int);
    JVS(ALI*);
    ~JVS();
};


#endif //UNTITLED1_JVS_H
