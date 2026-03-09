#include <iostream>
#include <vector>
#include <string.h>
#include <stack>


using namespace std;

bool isValid(string s) {
    int i = 0;
    stack<char> st;
    for(char c : s){
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
        } else {
            if(st.empty()) return false;

            char top = st.top();
            st.pop();

            if (c == ')' && top != '(') return false;
            if (c == '}' && top != '{') return false;
            if (c == ']' && top != '[') return false;
        }
    }
    return st.empty();
}

int main(){
    string s = "(([])";

    if(isValid(s)){
        cout << "true";
    } else {
        cout << "false";
    }
}