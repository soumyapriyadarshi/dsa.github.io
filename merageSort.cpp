#include <iostream>
#include <vector>
using namespace std;

void merageSort(vector<int> &arr1, vector<int> &arr2) {
    int m = arr1.size();
    int n = arr2.size();

    int idx = m+n-1;
    int i = m-1, j = n-1;
    while(i >= 0 && j >= 0) {
        if(arr1[i] >= arr2[j]) {
            arr1[idx] = arr1[i];
            idx--;
            i--;
        }
        else {
            arr1[idx] = arr2[j];
            idx--;
            j--;
        }
    }

    while(j>=0) {
        arr1[idx] = arr2[j];
        idx--;
        j--;
    }
}

void printArray(vector<int> &arr1, vector<int> &arr2) {
    int n = arr1.size();
    int m = arr2.size();
    for(int i = 0; i < n+m; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {4, 5, 6};

    merageSort(arr1, arr2);
    cout << "Merged array: " << ": ";
    printArray(arr1, arr2);
    
}