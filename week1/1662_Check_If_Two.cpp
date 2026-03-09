#include <iostream>
#include <vector>
#include <string.h>
#include <stack>

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    int i = 0, m = 0;
    int j = 0, n = 0;

    while(i < word1.size() && j < word2.size()){
        if(word1[i][m] != word2[j][n]) return false;

        m++;
        n++;

        if(m == word1[i].size()){
            m = 0;
            i++;
        }

        if(n == word2[j].size()){
            n = 0;
            j++;
        }
    }

    return i == word1.size() && j == word2.size();
}

int main(){
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};

    if(arrayStringsAreEqual(word1, word2)){
        cout << "True";
    } else {
        cout << "False";
    }
}