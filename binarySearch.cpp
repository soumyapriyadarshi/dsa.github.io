#include <iostream>
#include <vector>
using namespace std;

// optimized.
int binarySearch(vector<int> arr, int tarr){
    int st = 0, end = arr.size() - 1;
    
    while(st <= end){
        int mid = st + (end - st) / 2;

        if(tarr > arr[mid]){
            st = mid + 1;
        } else if (tarr < arr[mid]){
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

// Recursion
int binarySearchR(vector<int> arr, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end - st)/2;
        if(tar > arr[mid]){
            return binarySearchR(arr, tar, mid + 1, end);
        } else if(tar < arr[mid]){
            return binarySearchR(arr, tar, st, mid - 1);
        } else {
            return mid;
        }
    }

    return -1;
}

int main(){
    //array 1
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd
    int tarr1 = 12;

    //array 2
    vector<int> arr2 = {-1, 0, 3, 4, 5, 9}; //even
    int tarr2 = 9;

    cout << binarySearchR(arr2, tarr2, 0, arr2.size() - 1) << endl;
}