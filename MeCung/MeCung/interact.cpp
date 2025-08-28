#include <conio.h>
#include <string>
using namespace std;

class interact{
public:
    string input(bool, bool);
};

string interact::input(bool lenh, bool move){
    if (move == true){
        while(true){
            char c = _getch();
            if (c == 9) {
                return "exit";
            }
            if (c == 72) {
                return "up";
            } 
            else if (c == 80) {
                return "down";
            } 
            else if (c == 75) {
                    return "left";
            } 
            else if (c == 77) {
                return "right";
            }      
        }
    }
}