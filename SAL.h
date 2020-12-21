#ifndef UNTITLED1_SAL_H
#define UNTITLED1_SAL_H
using namespace std;
#include<iostream>


class SAL {
    public:
        virtual void setAddress(int);
        virtual void setNumber(int);
        virtual void setSymbol(string);
        virtual void Execute();
        virtual void Print();
        virtual int getNumberFromINT();
        virtual void setVar(string);
        virtual string getVar();
        SAL();
        virtual ~SAL();
};


#endif //UNTITLED1_SAL_H
