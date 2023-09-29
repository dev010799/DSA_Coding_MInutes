#include<iostream>
using namespace std;

int power(int n) {
    // base case:
    if(n == 0) {
        return 1;
    }
    
    // Recursive case:
    return  5 * power(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << power(n) << endl;
}