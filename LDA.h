//
// Created by Daniel Rodriguez on 12/1/20.
//

#ifndef UNTITLED1_LDA_H
#define UNTITLED1_LDA_H

#include "SAL.h"
#include<string>
#include "ALI.h"

using namespace std;

class LDA :
        public SAL
{
private:
    ALI * ali;
    string symbol;

public:

    void Execute();
    void setSymbol(string);
    LDA(ALI* ali_);
    ~LDA();
};


#endif //UNTITLED1_LDA_H
