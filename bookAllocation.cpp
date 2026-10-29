#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int mid){ //O(n)
    int student = 1, pages = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > mid){
            return false;
        }
        if(pages+arr[i] <= mid){
            pages += arr[i];

        }else{
            student++;
            pages = arr[i];
        }
    }
    return student > m ? false : true;;
}

int allocatedBooks(vector<int> arr, int n, int m){
    int sum = 0;
    for (int i = 0; i < n; i++){ //O(n)
        sum += arr[i];
    }
    int st = 0, end = sum, ans = -1; // range of possible answers
    
    while(st <= end){ //O(logN * n)
        int mid = st + (end - st) /2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid -1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main (){
    vector<int> arr = {15, 17, 20};
    int n = 3, m = 2;

    cout << allocatedBooks(arr, n, m) << endl;
}