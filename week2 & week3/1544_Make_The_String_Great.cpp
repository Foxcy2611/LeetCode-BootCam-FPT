#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

string makeGood(string s) {
    int i = 0;
    string res = "";

    for(char c : s){
        if(! res.empty() && abs(res.back() - c) == 32){
            res.pop_back();
        } else {
            res.push_back(c);
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << makeGood(s) << endl; 
    }
}