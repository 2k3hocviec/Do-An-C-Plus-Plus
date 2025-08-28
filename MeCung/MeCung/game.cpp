#include <vector>
#include <windows.h>
#include "giaodien.cpp"
#include "interact.cpp"
using namespace std;

giaodien gd;
interact tuongtac;

bool checkPath(vector<vector<int>> matran, pair<int, int> &contro, string c) {
    int n = matran.size();
    int m = matran[0].size();
    int x = contro.first;
    int y = contro.second;

    if (c == "up") x--;
    else if (c == "down") x++;
    else if (c == "left") y--;
    else if (c == "right") y++;

    if (x < 0 || x >= n || y < 0 || y >= m) return false;
    if (matran[x][y] == 0) return false;

    contro.first = x;
    contro.second = y;
    return true;
}

vector <vector<vector <int>>> mecung = {{   {,1,1,1,1},
                                            {0,0,0,0,1},
                                            {1,1,1,1,1},
                                            {1,0,0,0,0},
                                            {1,1,1,1,1},      }} 


void playGame(){
    vector <vector <int>> matran = {{1,1,1,1,1},
                                    {0,0,0,0,1},
                                    {1,1,1,1,1},
                                    {1,0,0,0,0},
                                    {1,1,1,1,1},};
    pair <int, int> batdau = {0,0};
    pair <int, int> kethuc = {matran.size() - 1,matran.size() - 1};
    pair <int, int> contro = batdau;
    while (contro != kethuc){
        gd.windowGame(matran);
        gd.contro(2 + 2*contro.first, 34 + 4*contro.second);
        string c = tuongtac.input(false, true);
        if (c == "exit") {
            gd.end();
            Sleep(5000);
            return;
        }
        if (!checkPath(matran, contro, c)){
            //gd.error();
            //Sleep(1000);
        }
    }
    gd.windowGame(matran);
    gd.contro(2 + 2*contro.first, 34 + 4*contro.second);
    Sleep(100);
    gd.win();
    Sleep(10000);
}
