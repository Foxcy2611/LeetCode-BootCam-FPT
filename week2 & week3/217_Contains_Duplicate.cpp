#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    map<int, int> mp;
    for(int x : nums){
        mp[x]++;
    }        

    for(pair<int, int> it : mp){
        if(it.second >= 2) return true;
    }
    return false;
}

int main(){
    vector<int> nums1 = {1, 2, 3, 1};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    if(containsDuplicate(nums3)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}