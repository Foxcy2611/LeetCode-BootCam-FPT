#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;
    int mid = 0;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        } else if(nums[mid] == 1){
            mid++;
        } else if(nums[mid] == 2){
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){
   vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);
}