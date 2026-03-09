#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int l = 0, r = 0, max_len = 0;
    unordered_set<char> window;

    while(r < s.length()){
        if(window.find(s[r]) == window.end()){
            window.insert(s[r]);
            max_len = max(max_len, r - l + 1);
            r++;
        } else {
            window.erase(s[l]);
            l++;
        }
    }
    return max_len;
}

int main(){
    string s = "abcabcbb";

    cout << lengthOfLongestSubstring(s);
}