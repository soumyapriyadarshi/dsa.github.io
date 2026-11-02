#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bruteForce(vector<int> &nums, int n) {
    sort(nums.begin(), nums.end());
}

void sortColorOptimized(vector<int> &nums, int n) {
    int count0 = 0, count1=0, count2=0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        else count2++;
    }

    int idx = 0;
    for(int i = 0; i<count0; i++){
        nums[idx++] = 0;
    }

    for(int i = 0; i < count1; i++) {
        nums[idx++] = 1;
    }
    
    for(int i = 0; i < count2; i++) {
        nums[idx++] = 2;
    }

}

void sortColorOptimal(vector<int> &nums, int n) {
    int mid = 0, high = n - 1, low = 0;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if(nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int n = nums.size();
    cout << "Original array: ";
    for(int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    // sortColorOptimized(nums, n);
    // bruteForce(nums, n);
    sortColorOptimal(nums, n);
    cout << "Sorted array: ";
    for(int x:nums) {
        cout << x << " ";
    }
}