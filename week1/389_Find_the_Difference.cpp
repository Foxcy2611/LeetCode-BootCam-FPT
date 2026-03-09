#include <iostream>
#include <vector>
#include <string.h>
#include <stack>

using namespace std;

char findTheDifference(string s, string t) {
    int m1 = 0, m2 = 0;
    for(char c : s){
        m1 += (int)c;
    }
    
    for(char c : t){
        m2 += (int)c;
    }

    return (char)(m2 - m1);
}

int main(){
    string s = "abcd";
    string t = "abcde";

    cout << findTheDifference(s, t);
}