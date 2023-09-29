#include<iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    if(n == 1 or n == 0) {
        return true;
    }

    if(arr[0] < arr[1] and isSorted(arr + 1, n - 1)) {
        return true;   
    }
    return false;
}

int main() {
   int arr[] = {1,2,3,4,6,5,7};
   int n = sizeof(arr) / sizeof(int);
   cout << isSorted(arr, n) << endl;
}