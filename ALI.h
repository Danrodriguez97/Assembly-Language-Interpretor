//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_ALI_H
#define UNTITLED1_ALI_H

#include<iostream>
#include"SAL.h"
#include<string>
#include<map>

using namespace std;

class ALI{
    private:
        int regA;
        int regB;
        int zeroBit;
        int overflowBit;
        int programCounter;
        SAL *memory[256];
        map<string, int> dictionary;

public:
    int getRegA()const;
    int getRegB()const;
    int getZeroBit()const;
    int getOverflowBit()const;
    int getProgramCounter()const;
    SAL* getMemory(int);
    int getSymbol(string symbol);
    map<string, int> *getMap();

    void setRegA(const int& num);
    void setRegB(const int& num);
    void setZeroBit(const int& num);
    void setOverflowBit(const int& num);
    void setProgramCounter(const int& num);
    void setMemory(const int& index, SAL *object);
    void setSymbol(string symbol, int address);
    void perform();

    ALI();
    ~ALI();
    void Print();
};

#endif //UNTITLED1_ALI_H
