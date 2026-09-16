#include <iostream>
#include <vector>
using namespace std;

int peakIndex(vector<int> arr){
    int st = 1, end = arr.size() - 2;

    while(end <= end) {
        int mid = st + (end-st)/2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
            return mid;
        }

        if (arr[mid - 1] < arr[mid]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;

}

int main(){
    vector <int> arr = {0, 3, 5, 11, 7, 5};

    cout << peakIndex(arr) << endl;
}