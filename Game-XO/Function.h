#include <iostream>
#include <windows.h>
#include "Interface.cpp"
#include <conio.h>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

namespace Function {
    void Gotoxy(int, int);
    char Input(int, bool, bool);
    void Print(int, int, string);
    void Print_Animation(int, int, int, string);
    void Welcome();
    void Introduce_1();
    void Introduce_2();
    void Board_Game_Current(vector <vector <string>>& board);
    void End();
    bool Check_Win(vector <vector <string>>& board, string);
    bool Check_Draw(vector <vector <string>>& board);
    void Play_Game();
};