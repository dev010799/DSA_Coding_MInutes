// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int get_Ith_Bit(int n, int i) {
//     int mask = (1 << i);
//     return (n & mask) > 0 ? 1 : 0;

// }
// void set_Ith_Bit(int &n, int i) {
//     int mask =  (1 << i);
//     n = (n | mask);

// }

// void clear_Ith_Bit(int &n, int i) {
//     int mask = ~(1 << i);
//     n = n & mask;
// }

// // Combine the functionalities of set bit and clear bit.
// void update_Ith_Bit(int n, int i, int v) { 
//     clear_Ith_Bit(n, i);
//     int mask = (v << i);
//     n = n | mask;
// }

// void clear_Last_bits(int &n, int i) {
//     int mask = (-1 << i);
//     n = n & mask;

// }

// void clear_Bits_In_Range(int &n, int i, int j) {
//     int a = (~0) << (j + 1);
//     int b = (1 << i) - 1;
//     int mask = a | b;
//     n = n & mask;
// }


// int main() {
//     int n {13};
//     int i;
//     cin >> i;

//     // cout << get_Ith_Bit(n, i) << endl;
//     // set_Ith_Bit(n, i);
//     // cout << n;
//     // clear_Ith_Bit(n, i);
//     update_Ith_Bit(n, i, 1);
   
    

//     return 0;

// }

//===================================================================
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int get_Ith_Bit(int n, int i) {
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

void set_Ith_Bit(int &n, int i) {
    int mask = (1 << i);
    n = (n | mask);
}

void clear_Ith_Bit(int &n, int i) {
    int mask = ~(1 << i);
    n = (n & mask);
}

void update_Ith_Bit(int n, int i, int v) {
    clear_Ith_Bit(n, i);
    int mask = (v << i);
    n = n | mask;

}

void clear_Last_Bits(int &n, int i) {
    int mask = (-1 << i);
    n = n & mask; 
}

int main () {

    int n = 13;
    int i;
    cin >> i;

    // cout << get_Ith_Bit(n, i) << endl;
    // set_Ith_Bit(n, i);
    // clear_Ith_Bit(n, i);
    // update_Ith_Bit(n, i, 3);
    clear_Last_Bits(n, i);
    
    cout << n << endl; 
    

    return 0;
}