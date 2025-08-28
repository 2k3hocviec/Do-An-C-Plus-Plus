#include <iostream>
#include "Function.cpp"
using namespace std;

void Start(){
    while(true){
        Function::Welcome();
        char c;
        c = Function::Input(0, false, false);
        if (c == 't') break;
        if (c == 'e'){
            Function::Introduce_1();
            char c1 = Function::Input(0, true, false);
            if (c1 = 'e'){
                Function::Introduce_2();
                char c2 = Function::Input(0, true, false);
                if (c2 == 'e'){
                    Function::Play_Game();
                }
            }
        }       
    }
    Function::End();
}