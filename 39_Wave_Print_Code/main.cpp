#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void input(int arr[100][100], int r, int c) {
//     for(int i {0}; i < r; i++) {
//         for(int j {0}; j < c; j++) {
//             cin >> arr[i][j];
//         }
//     }
// }

// void Wave_Print(int arr[100][100], int r, int c) {
//     int i {0};
//     int j {0};
//     while(j < c) {
//         if(j %2 == 0) {
//             int i {0};
//             while(i < r) {
//                 cout << arr[i][j];
//                 i++;
//             }
//         }
//         else {
//             int i {r - 1};
//             while(i > -1) {
//                 cout << arr[i][j] << " ";
//                 i--;
//             }


//         }
//         j++;
//     }
// }

// int main() {
//     int arr[100][100];
//     int r, c;
//     cin >> r >> c;
//     input(arr, r, c);
//     Wave_Print(arr, r, c);
//     return 0;

// }

/*
********************************************
Using Vector:
********************************************
*/
/*

Examples :

Input :
1 2 3 4

5 6 7 8

9 10 11 12

13 14 15 16

Output :
4 8 12 16 15 11 7 3 2 6 10 14 13 9 5 1

*/

 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    vector<int> res;
    int i, j = n - 1, wave = 1;
 
    /* m 	- Ending row index
        n 	- Ending column index
        i, j 	- Iterator
        wave 	- for Direction
        wave = 1 - Wave direction down
        wave = 0 - Wave direction up   */
    while (j >= 0) {
         
        // Check whether to go in
        // upward or downward
        if (wave == 1) {
             
            // Print the element of the matrix
            // downward since the value of wave = 1
            for (i = 0; i < m; i++)
                res.push_back(arr[i][j]);           
            wave = 0;
            j--;
        }
        else {
             
            // Print the elements of the
            // matrix upward since the value
            // of wave = 0
            for (i = m - 1; i >= 0; i--)
               res.push_back(arr[i][j]) ;            
            wave = 1;
            j--;
        }
    }
return res;
}