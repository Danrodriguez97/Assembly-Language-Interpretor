//
// Created by Daniel Rodriguez on 12/1/20.


#ifndef UNTITLED1_LDB_H
#define UNTITLED1_LDB_H

#include "SAL.h"
#include "ALI.h"
#include<string>

using namespace std;


class LDB :
        public SAL
{
private:
    ALI * ali;
    string symbol;
public:
    void Execute();
    void setSymbol(string);
    LDB(ALI*);
    ~LDB();
};


#endif //UNTITLED1_LDB_H
