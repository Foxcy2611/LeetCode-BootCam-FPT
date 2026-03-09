#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while(i >= 0 && j >= 0){
        if(nums1[i] < nums2[j]){
            nums1[k] = nums2[j];
            j--;
            k--;
        } else {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
    }

    while(j >= 0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    // ---- PHẦN NHẬP INPUT ĐỂ TEST ----
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    // Gọi hàm
    merge(nums1, m, nums2, n);

    // In ra màn hình để kiểm tra
    for(int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
    // Kết quả mong đợi: 1 2 2 3 5 6
    return 0;

}