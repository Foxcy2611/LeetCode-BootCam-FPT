#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

// Nhom n cap, bo 1 so lon hon, tinh tong cac cap sao cho lon nhat
int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());        

    int sum = 0;

    for(int i = 0 ; i < nums.size() ; i += 2){
        sum += nums[i];
    }

    return sum;
}

int main(){
    vector<int> nums = {6, 2, 6, 5, 1, 2};

    cout << arrayPairSum(nums);
}