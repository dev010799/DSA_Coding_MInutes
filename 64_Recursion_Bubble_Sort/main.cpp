#include<iostream>
using namespace std;

void Bubble_Sort(int arr[], int n) {
    // Base Case:
    if(n == 1) {
        return;
    }

    for(int i {0}; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    // Recursive case:
    return Bubble_Sort(arr, n - 1);
}

void Bubble_Sort_rec_2(int arr[], int n) {
    // Base Case:
    if(n == 1) {
        return;
    }

    for(int i {0}; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    // Recursive case:
    return Bubble_Sort_rec_2(arr, n - 1);
}

// int main() {
//     int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
//     int n = sizeof(arr) / sizeof(int);
//     for(int i {0}; i < n; i++) {
//         cout << arr[i] << endl;

//     }
//     cout << Bubble_Sort(arr, n) << endl;

    
// }
