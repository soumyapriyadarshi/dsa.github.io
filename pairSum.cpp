#include <iostream>
#include <vector>
using namespace std;

//function writing brote force approch
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = i+1; j < n; j++)
    //     {
    //         if(nums[i] + nums[j])
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }

    int i = 0, j = n-1;

    while(i < j)
    {
        int pairSum = nums[i] + nums[j];
        if(pairSum < target)
        {
            i++;
        }
        else if(pairSum > target)
        {
            j--;
        }
        else 
        {
          return {i, j};
        }
    }


    return ans;
}

int main()
{
    vector<int> vec = {3, 2, 4};
    int target = 6;

    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}