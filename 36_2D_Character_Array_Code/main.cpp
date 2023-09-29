#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 2D Character Arrays.
int main() {
    char numbers[][10] = {
        "one",
        "Two",
        "Three",
        "Four",
        "Five",
        "Six",
    };

    for(int i {0}; i < 6; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}