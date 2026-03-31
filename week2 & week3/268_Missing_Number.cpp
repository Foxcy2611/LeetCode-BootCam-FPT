#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<int> count(n + 1, 0);
    for(int i : nums){
        count[i] = 1;
    }

    for(int x  = 0 ; x < n + 1 ; x++){
        if(count[x] == 0) return x;
    }
    return -1;
}

int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};

    cout << missingNumber(nums);
}