#include <iostream>
#include <vector>
#include <string.h>
#include <stack>

using namespace std;

bool judgeCircle(string moves) {
    int x = 0, y = 0;
    for(char c : moves){
        if(c == 'U') y++;
        else if(c == 'D') y--;
        else if(c == 'L') x--;
        else if(c == 'R') x++;
    }

    return x == 0 && y == 0;
}

int main(){
    string moves = "LDRRLRUULR";

    if(judgeCircle(moves)){
        cout << "True";
    } else {
        cout << "False";
    }
}