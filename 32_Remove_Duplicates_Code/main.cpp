#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string s) {
    string str;
    set<char> ss(s.begin(), s.end());

    for(auto x : ss)
        str.push_back(x);

    return str;

    
}
