#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int>& height){
    //Brute force approach.
    // int maxWater = 0;
    // for(int i = 0; i < height.size(); i++){
    //     for(int j = i+1; j < height.size(); j++){
    //         int width = j - i;
    //         int ht = min(height[i], height[j]);
    //         int area = width * ht;
    //         maxWater = max(maxWater, area);
    //     }
    // }

    //Optimal Approach (2 pinter approach)
    int maxWater = 0; int lp = 0; int rp = height.size() - 1;
    while(lp < rp){
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int area = w * ht;
        maxWater = max(maxWater, area);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << maxWater(height);
}