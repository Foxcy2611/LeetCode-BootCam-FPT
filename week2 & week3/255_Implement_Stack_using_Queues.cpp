#include <bits/stdc++.h>

using namespace std;

queue<int> q;
    
// MyStack(){

// }

void push(int x) {
    int n = q.size();

    q.push(x);
    
    for(int i = 0 ; i < n ; i++){
        q.push(q.front());
        q.pop();
    }
}

int pop() {
    int x = q.front();
    q.pop();
    return x;
}

int top() {
    return q.front();
}

bool empty() {
    return q.empty();
}

int main(){
    push(1); // 1
    push(2); // 2 1
    cout << top() << endl; // 2
    cout << pop() << endl; // 2
    cout << empty() << endl; // false
}