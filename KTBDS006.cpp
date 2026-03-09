#include <bits/stdc++.h>

using namespace std;

#define ll long long

int prime[1005];
vector<int> Snt;
int n, k;
int res = 0;

void Sang_Snt(){
    for(int i = 0 ; i <= 1005 ; i++){
        prime[i] = 1;
    }

    prime[0] = prime[1] = 0;

    for(int i = 0 ; i * i < 1005 ; i++){
        if(prime[i]){
            for(int j = i * i ; j <= 1005 ; j += i){
                prime[j] = 0;
            }
        }
    }
    for(int i = 2 ; i <= 1000 ; i++){
        if(prime[i]){
            Snt.push_back(i);
        }
    }
}

// idx = 0, cnt = 0, sum = 0
void Try(int index, int cnt, int sum){
    if(cnt == k){
        if(sum == n) res++;
        return;
    }

    for(int idx = index ; idx < Snt.size() ; idx++){
        if(sum + Snt[idx] > n) break;

        Try(idx + 1, cnt + 1, sum + Snt[idx]);
    }
}

void Solve(void){
    cin >> n >> k;

    res = 0;
    Try(0, 0, 0);

    cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Sang_Snt();
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
}