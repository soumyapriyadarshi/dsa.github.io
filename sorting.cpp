#include <iostream>
#include <vector>
using namespace std;

// Bubble Short.
void bubbleShort(int arr[], int n) {

    bool isSwap = false;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
    }

    if(!isSwap) {
        return;
    }
}

// Selection Short.
void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++) {
        int smallestIdx = i;
        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

// Printing of Sorted array.
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Insertion sort
void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int curr = arr[i], prev = i - 1;
        while(prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
    }
}

// Main function.
int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    
    // bubbleShort(arr, n);
    // selectionSort(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}