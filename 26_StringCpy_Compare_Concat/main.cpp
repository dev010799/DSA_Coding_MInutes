#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    char a[1000] = "apple";
    char b[1000];

    // Calculate Length:
    cout << strlen(a) << endl;      // 5

    // ================================================

    // strcpy
    // copy the value of a to b.(a is source & b is destination)
    strcpy(b, a);                   
    cout << b << endl;              // apple.
    // =================================================

    // Compare:
    // If all the Letters match going to match then it shows 0.
    cout << strcmp(a, b) << endl;

    // ==================================================

    // Concatenation:

    char web[] = "WWW.";
    char domain[] = "CodingMinutes.com";
    // cout << strcat(web, domain) << endl;        // WWW.CodingMinutes.com

    strcpy(b, strcat(web,domain));
    cout << b;

    cout << strcmp(a,b) << endl;
}