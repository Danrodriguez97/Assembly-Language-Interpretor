//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_STR_H
#define UNTITLED1_STR_H
#include "SAL.h"
#include <string>
#include "ALI.h"

using namespace std;

class STR :
        public SAL
{

private:
    ALI * ali;
    string sym;

public:
    void Execute();
    void Print();
    int getSymbol(string sym);
    void setSymbol(string s);
    void storeSymbolAt(int index, SAL* object);
    STR(ALI*);
    ~STR();
};


#endif //UNTITLED1_STR_H
