#include<iostream>
#include<string>
using namespace std;

/*
// Problem:
------------>
// RunLength Encoding for string Compression
// If compressed string is bigger then original return original string
// Input: aaabbccddee
// Output: a3b2c2d2e2

// Input : abcd
// Output: abcd.
*/

// Time complexity of this code is Linear.
// Its not N^2 because we are also incrementing i at this point and this i is same as this i.
// So in total both for loop and while loop are just traversing the input string.
// They are not running for every value of i.
// Thsts the whole point here.

string compressString(string str) {
    int n = str.length();
    string output;

    for(int i {0}; i < n; i++) {
        int count = 1;
        
        while(i < n - 1 and str[i + 1] == str[i]) {
            count++;
            i++;
        }
        output += str[i];
        output += to_string(count);
    }
    if(output.length() > str.length()) {
        return str;
    }

    return output;

}

int main() {
    string s1 = "aaabbccddee";
    cout << compressString(s1) << endl;

    string s2 = "abcd";
    cout << compressString(s2) << endl;

    return 0;

}