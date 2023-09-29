#include<iostream>
using namespace std;
// Write a function to find the first occurence of an element in an array!.

int firstOcc(int arr[], int n, int key) {
    // Base case:
    if(n == 0) {
        return -1;
    }
    // Recursive case:
    if(arr[0] == key) {
        return 0;
    }

    int subIndex = firstOcc(arr + 1, n - 1, key);
    if(subIndex != -1) {
        return subIndex + 1;
    }
    return -1;

}
int main() {
    int arr[] = {1, 3, 5, 7, 6, 2, 11, 21};
    int n = sizeof(arr) / sizeof(int);
    int key = 7;
    cout << firstOcc(arr, n, key);

}