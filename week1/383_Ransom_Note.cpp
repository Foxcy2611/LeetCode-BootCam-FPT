#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <math.h>
#include <iomanip>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    int count[26] = {0};

    for(char c : magazine){
        count[c - 'a']++;
    }

    for(char c : ransomNote){
        count[c - 'a']--;

        if(count[c - 'a'] < 0) return false;
    }
    return true;
}

int main(){
    string ransomNote = "aa";
    string magazine = "aab";

    if(canConstruct(ransomNote, magazine)){
        cout << "True";
    } else {
        cout << "False";
    }
}