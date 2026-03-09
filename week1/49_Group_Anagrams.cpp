#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> strMap;

    for(string s : strs){
        string key = s;

        sort(key.begin(), key.end());
        
        strMap[key].push_back(s);
    }

    vector<vector<string>> result;

    for(auto pair : strMap){
        result.push_back(pair.second);
    }
    return result;
}

int main(){
    vector<string> strs = {"eat", "tea", "tan","ate","nat","bat"};

    vector<vector<string>> result = groupAnagrams(strs);

    for(int i = 0 ; i < result.size() ; i++){
        for(int j = 0 ; j < result[i].size() ; j++){
            cout << result[i][j] << " ";
            
        }
        cout << endl;
    }
}