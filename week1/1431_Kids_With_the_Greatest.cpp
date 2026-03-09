#include <iostream>
#include <vector>
#include <string.h>
#include <stack>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int max = 0;
    for(int x : candies){
        if(max < x) max = x;
    }

    vector<bool> result;

    for(int x : candies){
        if(x + extraCandies >= max) result.push_back(true);
        else result.push_back(false);
    }

    return result;
}

int main(){
    int extraCandies = 3;
    vector<int> candies = {2, 3, 5, 1, 3};

    vector<bool> result = kidsWithCandies(candies, extraCandies);

    for(bool i : result){
        cout << i << " ";
    }
}