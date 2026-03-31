#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool compare(string a, string b){
    return a + b > b + a;
}

string largestNumber(vector<int>& nums) {
    vector<string> str;
    
    for(int x : nums){
        str.push_back(to_string(x));
    }

    sort(str.begin(), str.end(), compare);

    if(str[0] == "0") return "0";

    string res;
    for(string x : str){
        res.append(x);
    }

    return res;
}

int main(){
    vector<int> nums = {3, 30, 34, 5, 9};
    
    cout << largestNumber(nums) << endl;
}