#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Repeatedly find the minimum element from unsorted part and putting it at the beginning.
// Step1:Select the Minimum Element first and swap it.
// Get the minimum and swap it.
// Last Element is Automatically sorted.

// Sort the elements in increasing order.
void selection_sort(int arr[], int n){

    for(int pos {0}; pos <= n - 2; pos++){
        

        int current = arr[pos];
        int min_position = pos;

        // with this loop find out the minimum element.
        for(int j {pos}; j < n; j++){
            if(arr[j] < arr[min_position]){
                min_position = j;

            }

        }

        swap(arr[min_position], arr[pos]);

    }
}

int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int); 

    for(auto x: arr){
        cout << x << ",";
    }
    return 0;
}