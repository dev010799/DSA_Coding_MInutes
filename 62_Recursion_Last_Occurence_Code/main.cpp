#include<iostream>
using namespace std;

int lastOcc(int arr[], int n, int key) {
    if(n == 0) {
        return -1;
    }

    int subIndex = lastOcc(arr + 1, n - 1, key);
    if(subIndex == -1) {
        if(arr[0] == key) {
            return 0;
        }
        else {
            return -1;
        }
    }
    else {
        return subIndex + 1;
    }

}
int main() {
    int arr[] = {1, 2, 5, 3, 1, 2, 3, 8, 6, 3, 6, 7, 3};
    int n = sizeof(arr) / sizeof(int);
    int key = 3;
    cout << lastOcc(arr, n, key);

}

