#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Spiral Print:
Write a function that takes in n x m 2D Array, and prints the all array elements in spiral
order.Start from top left corner goes to right, proceeds in a spiral pattern until every element in visited.

input:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/

void print(int arr[][10], int n, int m) {
    // 4 variables.
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    while(startCol <= endCol and startRow <= endRow) {
        // Start Row.
        for(int col = startCol; col <= endCol; col++) {
            cout << arr[startRow][col] << " ";
        }
        
        // End Column.
        for(int row = startRow + 1; row <= endRow; row++) {
            cout << arr[row][endCol]  << " ";
        }
        // End Row.
        for(int col = endCol - 1; col >= startCol; col--) {
            if(startRow == endRow) {
                break;
            }
            cout << arr[endRow][col] << " ";
        }
        
        // Start Column.
        for(int row = endRow - 1; row >= startRow + 1; row--) {
            // Avoid Duplicate Printing of Elements.
            if(startCol == endCol) {
                break;
            }
            cout << arr[row][startCol] << " ";

        }
        
        // Update the variables to point to inner spiral.
        startRow++;
        endRow--;
        startCol--;
        endCol--;

    }

}

int main() {
    int arr[][10] = { {1, 2, 3, 4},
                     {12, 13, 14, 5},
                     {11, 16, 15, 6},
                     {10, 9, 8, 7}};
    int n = 4, m = 4;
    print(arr, n, m);

    return 0;
}