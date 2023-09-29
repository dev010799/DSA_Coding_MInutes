#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Initialization without Null character(i.e. '\0')
    // It shows some garbage value. 
    // char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    // cout << arr << endl;
    
    // Initialization with Null character(i.e. '\0')
    // This code shows proper output.
    // Because in this we add '\0' character.
    // char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '\0'};
    // cout << arr << endl;

    // Initialization with double quotes "".
    // In this case does not require to add '\0' at last.

    char arr[] = {"abcdefghi"};
    cout << arr << endl;                // abcdefghi
    // char b[100];
    // cin >> b;
    // cout << b << endl; 
    cout << strlen(arr) << endl;       // 9 (why show 9 because it counts the number of visible characters.)
    cout << sizeof(arr) << endl;      // 10 (+1 because of null character.)

    return 0;
}

