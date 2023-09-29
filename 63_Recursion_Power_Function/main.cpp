#include<iostream>
using namespace std;

// Write a function to find power of a number, both number & power are given as input!.
/*
int power(int a, int n) {
    // Base case:
    if(n == 0) {
        return 1;
    }
    // Recursive case:
    return a * power(a, n - 1);
}

int main() {
    int a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}
*/

// Optimised Way(Solution):

int fastPower(int a, int n) {
    // Base Case:
    if(n == 0) {
        return 1;
    }
     // Recursive Case:
     int subProb = fastPower(a, n/2);
     int subProbSq = subProb * subProb;

     if(n & 1) {
        return a * subProbSq;
     }
     return subProbSq;
}

int main() {
    int a, n;
    cin >> a >> n;
    cout << fastPower(a, n) << endl;
    return 0;
}

