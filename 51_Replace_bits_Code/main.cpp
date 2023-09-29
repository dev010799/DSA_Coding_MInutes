#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// You are given two 32-bit numbers, N and M, and two bit positions i and j.
// Write a method to set all bits between i and j in N equal to M.
// M (becomes a substring of N locationed at and starting at j).
// Example:
// M = 10000000000;
// M = 10101;
// i = 2; j = 6;
// output: 1001010100

// void clear_Bits_In_Range(int &n, int i, int j) {
//     int a = (~0) << (j + 1);
//     int b = (1 << i) - 1;
//     int mask = a | b;
//     n = n & mask;
// }

// void replace_Bits(int &n, int i, int j, int m) {
//     clear_Bits_In_Range(n, i, j);
//     int mask = (m << i);
//     n = n | mask;    
// }

// int main() {
//     int n = 15;
//     int i = 1;
//     int j = 3;
//     int m = 2;

//     replace_Bits(n, i, j, m);
//     cout << n << endl;

//     return 0;

// }

// void bin(long n) {
//     cout << "0";
//     for(long i {1}; i > 0; i = i / 2) {
//         if((n & i) != 0) {
//             cout << "1";
//         }
//         else {
//             cout << "0";
//         }
//     }
// }

// int main() {
//     bin(7);
//     cout << endl;
//     bin(4);
// }


