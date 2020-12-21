#include <iostream>

using namespace std;

#include<iostream>
#include<string>
#include<sstream>
#include"SAL.h"
#include"JZS.h"
#include"ALI.h"
#include"STR.h"
#include"LDI.h"
#include"XCH.h"
#include<map>
#include"DEC.h"
#include"ADD.h"
#include"HLT.h"
#include"JVS.h"
#include"JMP.h"
#include"LDA.h"
#include"LDB.h"
#include<fstream>
#include <cmath>
#include <typeinfo>

void processCommand(ALI * ali_, string name, string number, int index) {
    if (name == "DEC") {
        SAL * val_1 = new DEC(ali_);
        val_1->setVar(name);
        val_1->setAddress(index);
        ali_->setSymbol(number, index);
        ali_->setMemory(index, val_1);

    }
    else if (name == "ADD") {
        SAL *ad = new ADD(ali_);
        ali_->setMemory(index, ad);

    }
    else if (name == "HLT") {
        SAL *hl = new HLT(ali_);
        ali_->setMemory(index, hl);

    }
    else if (name == "JVS") {
        SAL *jvs = new JVS(ali_);
        stringstream convert(number);
        int x = 0;
        convert >> x;
        jvs->setNumber(x);
        ali_->setMemory(index, jvs);
    }
    else if (name == "JZS") {
        SAL *jzs = new JZS(ali_);
        stringstream convert(number);
        int x = 0;
        convert >> x;
        jzs->setNumber(x);
        ali_->setMemory(index, jzs);

    }
    else if (name == "LDA") {
        SAL *lda = new LDA(ali_);
        lda->setSymbol(number);
        ali_->setMemory(index, lda);
    }
    else if (name == "LDB") {
        SAL *ldb = new LDB(ali_);
        ldb->setSymbol(number);
        ali_->setMemory(index, ldb);
    }
    else if (name == "LDI") {
        stringstream convert(number);
        int x = 0;
        convert >> x;
        SAL * val2 = new LDI(ali_);

        val2->setNumber(x);
        ali_->setMemory(index, val2);

    }
    else if (name == "STR") {
        SAL * str = new STR(ali_);
        str->setSymbol(number);
        ali_->setMemory(index, str);
    }
    else if (name == "XCH") {
        SAL * xc = new XCH(ali_);
        ali_->setMemory(index, xc);
    }
    else if (name == "JMP") {
        SAL *jmp = new JMP(ali_);
        std::stringstream convert(number);
        int x = 0;
        convert >> x;
        jmp->setNumber(x);
        ali_->setMemory(index, jmp);
    }
}

void readFile(ALI *ali_) {
    string name, number, line;
    string xch = "XCH";
    string add = "ADD";
    string hlt = "HLT";
    int index = 0;

    ifstream file;
    //when grading make sure file name is correct
    file.open("/Users/danielrodriguez/Desktop/input.txt");


    if (!file.is_open()) {
        cerr << "  ERROR FILE\n\n";
        exit(-1);
    }

    while (getline(file, line)) {
        auto tempPos = line.find(' ');
        auto isXch = line.find(xch);
        auto isAdd = line.find(add);
        auto isHlt = line.find(hlt);


        if (isAdd != string::npos || isXch != string::npos || isHlt != string::npos) {
            name = line.substr(0, 3);
            number = "NONE";
        }
        else {
            name = line.substr(0, tempPos);
            if (tempPos != std::string::npos) {
                number = line.substr(tempPos + 1, line.length());
            }
        }
        processCommand(ali_, name, number, index);
        index++;
    }
    ali_->Print();
}

void executeProgram(ALI * ali_) {

    for (int i = ali_->getProgramCounter(); i < 256; ) {

        if (ali_->getMemory(i) != NULL) {
            ali_->perform();

            i = ali_->getProgramCounter();
        }
        if (ali_->getMemory(i) == NULL)
            break;
    }
    ali_->Print();
}


int main() {

    ALI *ali_ = nullptr;

    string input;
    bool isALI = false;
    cout << "Program 4: SAL Emulator in C++" << endl;

    while (true) {

        if(isALI == true){
            delete ali_;
        }

        ali_ = new ALI();
        isALI = true;
        cout << "Your ALI has been created: " << endl;
        readFile(ali_);

        cout << "Enter command: ";
        cin >> input;


        if (input == "q") {
            cout << "User Quit" << endl;
            break;
        }

        else if (input == "r") {
            if (ali_ != nullptr) {
                executeProgram(ali_);
                //comp->perform();
            }
            else {
                cout << "Warning!!" << endl;
            }
        }
        else if (input == "l") {
            if (ali_ != nullptr) {
                ali_->perform();
                ali_->Print();
            }
            else {
                cout << "Warning!!" << endl;
            }
        }
        else {
            cout << "Invalid input." << endl;
        }
    }

    cout << "Exiting program." << endl;

    if (ali_ != nullptr) {
        delete ali_;
        ali_ = nullptr;
    }

    return 0;
}
