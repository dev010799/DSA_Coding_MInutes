#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int s, int e) {
    int pivot = a[e];
    int i = s - 1;

    for(int j = s; j < e; j++) {
        if(a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e]);
    return i + 1;
}

void quickSort(vector<int> &a, int s, int e) {
    // Base Case:
    if(s >= e) {
        return;
    }

    // Recursive Case:
    int p = partition(a, s, e);
    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
}

int main() {
    vector<int> arr {10, 5, 2, 0, 7, 6, 4};
    cout << arr.size() << endl;
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    return 0;
}