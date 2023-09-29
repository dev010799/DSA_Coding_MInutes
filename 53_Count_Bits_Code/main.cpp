#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Set Bits:
1. set bits = 1
2. Unset bits = 0

Write a function to count set bits in a number.
*/

int count_bits(int n) {
    int count = 0;

    while(n > 0) {
        // if (n & 1) increased the count by set bits./(if the last bit is 1 count bit is increased by 1)
        // if (n & 0) count is not increased the count (if set bit = 0) /(if the last bit is 0 count is increased by 0) 
        int last_bit = (n & 1);
        count += last_bit;        // initial count = 0.

        n = n >> 1;
    }
    return count;
}

// Counting Set bits: Hack(Faster method)
// This methods will take only set bits iterations.
int count_bits_hack(int n) {
    int ans = 0;
    while(n > 0){
        n = n & (n - 1);
        ans++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << count_bits(n) << endl;
    cout << count_bits_hack(n) << endl;
    

}