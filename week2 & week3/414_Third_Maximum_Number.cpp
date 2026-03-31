#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

int thirdMax(vector<int>& nums) {
    long long max1 = -1e18; 
    long long max2 = -1e18;
    long long max3 = -1e18;

    for(int num : nums){
        if(num == max1 || num == max2 || num == max3){
            continue;
        }

        if(num > max1){
            max3 = max2;
            max2 = max1;
            max1 = num;
        } else if(num > max2){
            max3 = max2;
            max2 = num;
        } else if(num > max3){
            max3 = num;
        }
    }

    if(max3 == -1e18) return max1;

    return max3; 
}


int main(){
    vector<int> nums = {1,2};
    cout << thirdMax(nums);
}