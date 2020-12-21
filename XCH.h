//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_XCH_H
#define UNTITLED1_XCH_H


#include "SAL.h"
#include "ALI.h"

using namespace std;

class XCH :
        public SAL
{
    ALI *ali;

public:
    void Execute();
    void Print();
    XCH(ALI*);
    virtual ~XCH();
};


#endif //UNTITLED1_XCH_H
