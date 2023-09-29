#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    // int x = 10 ;
    // cout << x << endl;
    // cout << &x << endl;
    // // float y = 3.2;
    // // cout << y << endl;
    // // cout << &y << endl;

    // int *xptr = &x;
    // cout << &xptr << endl;

    // // Address to a Pointer Variable.
    // cout << &xptr << endl;

    // // Pointer to a Pointer.
    // int ** xxptr = &xptr;
    // cout << xxptr << endl;


    /*
    ************************************
    Reference Variables:
    ************************************
    */

   int x = 10;
   int &y = x;
   
   // If we update anyone value from x & y then changes occur in both.
   y++;
   x++;
   //y--;
   //x--;

   cout << x << endl;     // 12.
   cout << y << endl;     // 12.

}