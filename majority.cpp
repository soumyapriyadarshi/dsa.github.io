#include <iostream>
#include <vector>
using namespace std;


int majorityElement(vector<int> nums){
    int n = nums.size();
//brute force approach
    // for(int val : nums){
    //     int freq = 0;
    //     for(int el:nums){
    //         if(el == val){
    //             freq++;
    //         }
    //     }
    //     if(freq > n/2){
    //         return val;
    //     }
    // }

    //shorting approach

    // int freq = 1, ans = nums[0];
    // for(int i = 0; i<n; i++)
    // {
    //     if(nums[i] == nums[i - 1])
    //     {
    //         freq++;
    //     }
    //     else
    //     {
    //         freq = 1;
    //         ans = nums[i];
    //     }

    //     if(freq > n/2)
    //     {
    //         return ans;
    //     }
    // }

//mooris voting
    int freq = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(freq == 0){
            ans = nums[i];
        } else if(ans == nums[i]){
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    // vec = sort(vec.begin(), vec.end());
    int ans = majorityElement(vec);
    
    cout << ans << endl;
    return 0;
}