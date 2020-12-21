//
// Created by Daniel Rodriguez on 12/1/20.
//

#include "ALI.h"

#include <iostream>
#include <fstream>
#include <typeinfo>

using namespace std;


ALI::ALI()
        :regA(0), regB(0), zeroBit(0), overflowBit(0), programCounter(0)
{
    for (int i = 0; i < 256; i++) {
        this->memory[i] = nullptr;
    }
}


ALI::~ALI()
{
    for (int i = 0; i < 256; i++) {
        if (this->memory[i] != NULL) {
            delete this->memory[i];
        }
    }
}

void ALI::Print()
{
    string nextOP = "NULL";

    if (memory[this->getProgramCounter()] != nullptr) {
        nextOP = typeid(*memory[this->getProgramCounter()]).name();
        auto convertName = nextOP.find("INT");
        if (convertName != string::npos) {
            nextOP = memory[this->getProgramCounter()]->getNumberFromINT();
        }
        else {
            nextOP = typeid(*memory[this->getProgramCounter()]).name();
        }
    }


    cout << "Values: " << endl;
    cout << "Reg A: " << regA << endl;
    cout << "Reg B: " << regB <<  endl;
    cout << "ZeroBit " << zeroBit << endl;
    cout << "OverflowBit: " << overflowBit << endl;
    cout << "PC: " << programCounter << endl;
    cout << "NEXT: " << nextOP << endl << endl;
    cout << "Memory state: ";

    for (int i = 0; i < 256; i++) {
        if (memory[i] == nullptr) {
        }
        else {
            string temp = typeid(*memory[i]).name();

            auto str = temp.find("INT");

            if (str != string::npos) {
                cout << memory[i]->getNumberFromINT() << " ";
            }
            else {
                cout << typeid(*memory[i]).name() << " ";
            }
        }

    }
   cout << endl <<"\n";
}

int ALI::getRegA() const{
    return this->regA;
}

int ALI::getRegB() const{
    return this->regB;
}

int ALI::getZeroBit() const{
    return this->zeroBit;
}

int ALI::getOverflowBit() const{
    return this->overflowBit;
}

int ALI::getProgramCounter() const{
    return this->programCounter;
}

SAL *ALI::getMemory(int index){
    return this->memory[index];
}

int ALI::getSymbol(string symbol){
    return this->dictionary[symbol];
}

map<string, int>* ALI::getMap(){
    return &dictionary;
}

void ALI::setRegA(const int & num){
    this->regA = num;
}

void ALI::setRegB(const int & num){
    this->regB = num;
}

void ALI::setZeroBit(const int & num){
    this->zeroBit = num;
}

void ALI::setOverflowBit(const int & num){
    this->overflowBit = num;
}

void ALI::setProgramCounter(const int & num){
    this->programCounter = num;
}

void ALI::setMemory(const int & index, SAL *object){
    this->memory[index] = object;
}

void ALI::setSymbol(string symbol, int address){
    if (this->dictionary.find(symbol) == this->dictionary.end()) {
        this->dictionary.insert(make_pair(symbol, address));
    }
    else {
        this->dictionary[symbol] = address;

    }
}

void ALI::perform(){

    if(this->memory[this->programCounter ] != nullptr)
        this->memory[this->programCounter ]->Execute();

}

