#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // int a = 0;
    // cout << ~a << endl;

    // Odd Even check:
    int x;
    cin >> x;
    

    if(x & 1) {
        cout << "odd";
    }
    else {
        cout << "even";
    }
    return 0;
}