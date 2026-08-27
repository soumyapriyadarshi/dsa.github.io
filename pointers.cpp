#include <iostream>
#include <vector>
using namespace std;

//pass by reference using "POINTERS"
// void changeA(int* ptr){
//     // CHANGING VALUE OF A USING POINTERS.
//     *ptr = 20;
// }

// void changeA(int &b){
//     b = 20; //chage by referense using alias
// }

int main(){
    // int a;
    // cin >> a;
    // int* ptr = &a;
    // int** parentptr = &ptr;
    
    // // conditional statements.
    // if(&a == ptr){
    //     cout << ptr << endl;
    //     cout << parentptr << endl;
    //     cout << "address matched";
    // } else {
    //     cout << "address does not match";
    // }

    // int a =10;
    // int* ptr = &a;
    // cout << *(&a) << endl;
    // cout << *(ptr) << endl;
    // cout << a << endl;
    // changeA(a);
    // cout << a << endl;

    //POINTER ARITHMETIC
    // int* ptr = &a;
    // cout << ptr << endl;
    // cout << ptr + 2 << endl;

    //ARRAY POINTERS
    int arr[] = {10, 20, 30, 40};
    int* ptr = arr;

    cout << *(ptr + 1)<< endl;
    cout << *(ptr + 3) << endl;
    ptr++;
    cout << *ptr << endl;
    return 0;
}

