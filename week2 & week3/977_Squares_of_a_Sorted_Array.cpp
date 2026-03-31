#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n); 
    
    int left = 0;
    int right = n - 1;
    
    for (int k = n - 1; k >= 0; k--) {
        int squareLeft = nums[left] * nums[left];
        int squareRight = nums[right] * nums[right];
        
        if (squareLeft > squareRight) {
            res[k] = squareLeft;
            left++; 
        } else {
            res[k] = squareRight;
            right--; 
        }
    }
    
    return res;
}

int main(){
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> res = sortedSquares(nums);

    for(int x : res) cout << x << " ";

}
