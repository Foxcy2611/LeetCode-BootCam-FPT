#include <bits/stdc++.h>

using namespace std;

stack<int> in_st;
stack<int> out_st;

void moveInToOut(){
    if(out_st.empty()){
        while(! in_st.empty()){
            out_st.push(in_st.top());
            in_st.pop();
        }
    }
}

void push(int x) {
    in_st.push(x);
}

int pop() {
    moveInToOut();

    int x = out_st.top();
    out_st.pop();
    return x;
}

int peek() {
    moveInToOut();

    return out_st.top();
}

bool empty() {
    return in_st.empty() && out_st.empty();    
}

int main(){
    cout << 0 ;
}