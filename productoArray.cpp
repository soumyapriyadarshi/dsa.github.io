#include <iostream>
#include <vector>
using namespace std;

vector<int> product(vector<int>& nums){
    int n = nums.size();
    // Brute Force approach.(O(n^2))
    vector<int> ans(n, 1);
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(i != j){
    //             ans[i] *= nums[j];
    //         }
    //     }
    // }

    //optimal approach. O(n)
    // vector<int> prefix(n, 1);
    // vector<int> suffix(n, 1);
    // //prefix
    // for(int i = 1; i< n; i++){
    //     prefix[i] = prefix[i - 1] * nums[i - 1];
    // }

    // //suffix
    // for(int i = n - 2; i >= 0; i--){
    //     suffix[i] = suffix[i + 1] * nums[i + 1];
    // }

    // //ans
    // for(int i = 0; i < n; i++){
    //     ans[i] = prefix[i] * suffix[i];
    // }

    //optimization with space complexity.O(n) -> TC, O(1) -> SC. 
    for(int i = 1; i < n; i++){
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for(int i = n - 2; i >= 0; i--){
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }
    return ans;
};

int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = product(nums);
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}