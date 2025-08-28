#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>

using namespace std;

class giaodien{
public:    
    void windowGame(vector <vector<int>>);
    void windowGameLevel_2(vector <vector <int>>);
    void windowGameLevel_3(vector <vector <int>>);
    void windowGameLevel_4(vector <vector <int>>);
    void windowGameLevel_5(vector <vector <int>>);
    void windowGameLevel_6(vector <vector <int>>);
    void win();
    void contro(int, int);
    void error();
    void end();
};

void gotoxyin(int x, int y, string c){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = y; // cot
    pos.Y = x; // dong
    SetConsoleCursorPosition(hConsole, pos);
    cout << c;
}

void giaodien::error(){
    gotoxyin(20, 20, "khong hop le");
    Sleep(1000);
}

void giaodien::contro(int x, int y){
    gotoxyin(x, y, ">");
}

void giaodien::windowGame(vector <vector<int>> matran){
    system("cls");
    cout << R"(
                                ---------------------
                                |   |   |   |   |   |   
                                ----+---+---+---+----
                                |   |   |   |   |   |
                                ----+---+---+---+----
                                |   |   |   |   |   |
                                ----+---+---+---+----
                                |   |   |   |   |   |
                                ----+---+---+---+----
                                |   |   |   |   |   |
                                ---------------------

        
        Press tab to exit
    )";
    for (int i = 0; i < matran.size(); ++i){
        for (int j = 0; j < matran.size(); ++j){
            gotoxyin(2 + 2*i, 34 + 4*j, matran[i][j] == 1 ? "X" : "O");
        }
    }
}

void giaodien::windowGameLevel_2(vector <vector<int>> matran){
    system("cls");
    cout << R"(
                                -------------------------
                                |   |   |   |   |   |   |
                                ----+---+---+---+---+----
                                |   |   |   |   |   |   |
                                ----+---+---+---+---+----
                                |   |   |   |   |   |   |
                                ----+---+---+---+---+----
                                |   |   |   |   |   |   |
                                ----+---+---+---+---+----
                                |   |   |   |   |   |   |
                                --------------------+----
                                |   |   |   |   |   |   |
                                -------------------------

        
        
        Press tab to exit
    )";
    for (int i = 0; i < matran.size(); ++i){
        for (int j = 0; j < matran.size(); ++j){
            gotoxyin(2 + 2*i, 34 + 4*j, matran[i][j] == 1 ? "X" : "O");
        }
    }
}

void giaodien::windowGameLevel_3(vector <vector<int>> matran){
    system("cls");
    cout << R"(
                                -----------------------------
                                |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |
                                --------------------+---+----
                                |   |   |   |   |   |   |   |
                                -----------------------------
                                |   |   |   |   |   |   |   |
                                -----------------------------       

        
        Press tab to exit
    )";
    for (int i = 0; i < matran.size(); ++i){
        for (int j = 0; j < matran.size(); ++j){
            gotoxyin(2 + 2*i, 34 + 4*j, matran[i][j] == 1 ? "X" : "O");
        }
    }
}

void giaodien::windowGameLevel_4(vector <vector<int>> matran){
    system("cls");
    cout << R"(
                                ---------------------------------
                                |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |
                                --------------------+---+---+----
                                |   |   |   |   |   |   |   |   |
                                ----------------------------+----
                                |   |   |   |   |   |   |   |   |
                                --------------------------------- 
                                |   |   |   |   |   |   |   |   |
                                ---------------------------------    

        
        Press tab to exit
    )";
    for (int i = 0; i < matran.size(); ++i){
        for (int j = 0; j < matran.size(); ++j){
            gotoxyin(2 + 2*i, 34 + 4*j, matran[i][j] == 1 ? "X" : "O");
        }
    }
}

void giaodien::windowGameLevel_5(vector <vector<int>> matran){
    system("cls");
    cout << R"(
                                -------------------------------------
                                |   |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |   |
                                --------------------+---+---+---+----
                                |   |   |   |   |   |   |   |   |   |
                                ----------------------------+---+----
                                |   |   |   |   |   |   |   |   |   |
                                --------------------------------+----   
                                |   |   |   |   |   |   |   |   |   |
                                -------------------------------------  
                                |   |   |   |   |   |   |   |   |   |
                                -------------------------------------      

        
        Press tab to exit
    )";
    for (int i = 0; i < matran.size(); ++i){
        for (int j = 0; j < matran.size(); ++j){
            gotoxyin(2 + 2*i, 34 + 4*j, matran[i][j] == 1 ? "X" : "O");
        }
    }
}

void giaodien::windowGameLevel_6(vector <vector<int>> matran){
    system("cls");
    cout << R"(
                                -----------------------------------------
                                |   |   |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |   |   |
                                ----+---+---+---+---+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |   |   |
                                --------------------+---+---+---+---+----
                                |   |   |   |   |   |   |   |   |   |   |
                                ----------------------------+---+---+----
                                |   |   |   |   |   |   |   |   |   |   |
                                --------------------------------+---+----   
                                |   |   |   |   |   |   |   |   |   |   |
                                ------------------------------------+----
                                |   |   |   |   |   |   |   |   |   |   |
                                ------------------------------------+----     
                                |   |   |   |   |   |   |   |   |   |   |
                                ------------------------------------+----  
        

        Press tab to exit
    )";
    for (int i = 0; i < matran.size(); ++i){
        for (int j = 0; j < matran.size(); ++j){
            gotoxyin(2 + 2*i, 34 + 4*j, matran[i][j] == 1 ? "X" : "O");
        }
    }
}

void giaodien::win(){
    system("cls");
    cout << R"(
                                -------------
                                |           |  
                                |    you    |
                                |    are    |
                                |    win    |
                                |           |
                                -------------
    )";
}

void giaodien::end(){
    system("cls");
    cout << R"(
                                -------------
                                |           |  
                                |  program  |
                                |  wasn't   |
                                |  exit     |
                                |           |
                                -------------
    )";
}