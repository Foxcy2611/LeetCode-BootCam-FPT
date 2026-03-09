#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <math.h>
#include <iomanip>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    int sum = 0;
    
    for(int i = 0 ; i < k ; i++) sum += nums[i];

    int max = sum;

    for(int i = k ; i < nums.size() ; i++){
        sum = sum - nums[i - k] + nums[i];

        if(sum > max) max = sum;
    }
    
    return (double)max / k;
}

int main(){
    vector<int> nums = {5};
    int k = 1;

    double fix = findMaxAverage(nums, k);

    cout << fixed << setprecision(5) << fix << endl;

    return 0;
}