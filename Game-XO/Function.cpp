#include "Function.h"

void Function::Gotoxy(int x, int y) {
    COORD coord;
    coord.X = x - 1;
    coord.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

char Function::Input(int maxi, bool cont, bool invalid) {
    char ch;
    while (true) {
        Function::Gotoxy(75, 20);
        ch = _getch();
        if (cont == true){
            if (ch == 13){
                return 'e';
            }
        }
        else{
            if (ch == 13) {
                return 'e';
            }
            if (ch == 9) {
                return 't';
            }
        } 
        if (invalid == true){
            if (ch >= '1' && ch <= char(maxi + '1' - 1)){
                return ch;
            }
        }   
    }
}

void Function::Print(int x, int y, string s){
    Function::Gotoxy(x, y);
    cout << s;
}

void Function::Print_Animation(int x, int y, int delay, string s) {
    Function::Gotoxy(x, y);
    for(char& c : s) {
        Sleep(delay);
        cout << c;
    }
}

void Function::Welcome(){
    Interface::Giaodien_chinh();
    Sleep(1000);
    Function::Print_Animation(86, 6, 50, "Chao mung ban den voi tro choi XO");
    Sleep(1000);
    Function::Print_Animation(79, 9, 50, "Press tab to exit");
    Sleep(1000);
    Function::Print_Animation(110, 9, 50, "Press enter to begin");
}

void Function::Introduce_1() {
    Interface::Giaodien_chinh();
    Sleep(1000);
    Function::Print_Animation(77, 6, 50, "- Player 1: X");
    Function::Print_Animation(77, 7, 50, "- Player 2: O");
    Function::Print_Animation(77, 8, 50, "- thu tu cac o 1->9 theo thu tu");
    Sleep(1000);
    Function::Print_Animation(93, 9, 50, "Press enter to continue");
}

void Function::Introduce_2() {
    Interface::Chess_board();
    Sleep(200);
    Function::Print_Animation(99, 6, 0, "1");
    Sleep(200);
    Function::Print_Animation(103, 6, 0, "2");
    Sleep(200);
    Function::Print_Animation(107, 6, 0, "3");
    Sleep(200);
    Function::Print_Animation(99, 8, 0, "4");  
    Sleep(200);                                                                                                
    Function::Print_Animation(103, 8, 0, "5");
    Sleep(200);
    Function::Print_Animation(107, 8, 0, "6");
    Sleep(200);
    Function::Print_Animation(99, 10, 0, "7");
    Sleep(200);
    Function::Print_Animation(103, 10, 0, "8");
    Sleep(200);
    Function::Print_Animation(107, 10, 0, "9");
    Sleep(200);
    Function::Print_Animation(100, 13, 40, "Ready Go!");
    Function::Print_Animation(95, 17, 40, "Press enter to play!"); 
}

void Function::Board_Game_Current(vector<vector<string>>& board) {
    Interface::Chess_board();
    Function::Print_Animation(99, 6, 0, board[0][0]);
    Function::Print_Animation(103, 6, 0, board[0][1]);
    Function::Print_Animation(107, 6, 0, board[0][2]);
    Function::Print_Animation(99, 8, 0, board[1][0]);
    Function::Print_Animation(103, 8, 0, board[1][1]);
    Function::Print_Animation(107, 8, 0, board[1][2]);
    Function::Print_Animation(99, 10, 0, board[2][0]);
    Function::Print_Animation(103, 10, 0, board[2][1]);
    Function::Print_Animation(107, 10, 0, board[2][2]);
}


void Function::End(){
    Interface::Giaodien_chinh();
    Sleep(1000);
    Function::Print_Animation(94, 7, 20, "See you again, Goobye!");
}

bool Function::Check_Win(vector<vector<string>>& board, string player) {
    int kichthuoc = 3;
    for (int i = 0; i < kichthuoc; i++) {
        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player)
            return true;

        if (board[0][i] == player &&
            board[1][i] == player &&
            board[2][i] == player)
            return true;
    }

    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player)
        return true;

    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player)
        return true;

    return false;
}

bool Function::Check_Draw(vector<vector<string>>& board) {
    int kichthuoc = 3;
    for (int i = 0; i < kichthuoc; i++)
        for (int j = 0; j < kichthuoc; j++)
            if (board[i][j] != "X" && board[i][j] != "O")
                return false;
    return true;
}

void Function::Play_Game() {
    int kichthuoc = 3;
    vector<vector<string>> board = {
        {" ", " ", " "},
        {" ", " ", " "},
        {" ", " ", " "}
    };

    string currentPlayer = "X";

    while (true) {
        Function::Board_Game_Current(board);

        int choice;
        ostringstream oss;
        oss << "Nguoi choi " << currentPlayer << " chon o (1-9): ";
        string str = oss.str();
        Function::Print(77, 17, str);
        choice = Function::Input(9, false, true) - '0';

        if (choice < 1 || choice > 9) {
            Function::Print(77, 17, "Vi tri khong hop le, Press enter to again!");
            char c = Function::Input(0,true , false);
            continue;
        }

        int row = (choice - 1) / kichthuoc;
        int col = (choice - 1) % kichthuoc;


        if (board[row][col] == "X" || board[row][col] == "O") {
            Function::Print(77, 17, "Location wasn't empty, Press enter to again!");
            char c = Function::Input(0,true , false);
            continue;
        }

        board[row][col] = currentPlayer;

        if (Function::Check_Win(board ,currentPlayer)) {
            Function::Board_Game_Current(board);
            ostringstream oss;
            oss << "Player " << currentPlayer << " is winner!";
            string str = oss.str();
            Function::Print_Animation(95, 15, 40, str);
            Function::Print_Animation(90, 18, 40, "Press enter to play again !!!");
            char c = Function::Input(0, true, false);
            break;
        }

        if (Function::Check_Draw(board)) {
            Function::Board_Game_Current(board);
            Function::Print_Animation(97, 15, 10, "Tran dau hoa!");
            Function::Print_Animation(90, 18, 40, "Press enter to play again !!!");
            char c = Function::Input(0, true, false);
            break;
        }

        currentPlayer = (currentPlayer == "X") ? "O" : "X";
    }
}