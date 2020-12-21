//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_DEC_H
#define UNTITLED1_DEC_H

#include "SAL.h"
#include"ALI.h"
#include<string>

using namespace std;


class DEC :
        public SAL
{
private:
    ALI * ali;
    string var;
    int address;
public:
    void Execute();
    void setVar(string);
    void setAddress(int num);
    string getVar();


    DEC(ALI* ali_);
    ~DEC();
};


#endif //UNTITLED1_DEC_H
