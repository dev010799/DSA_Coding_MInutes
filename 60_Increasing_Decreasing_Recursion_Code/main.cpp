#include<iostream>
using namespace std;

void increasing_order(int n) {
    if(n == 0) {
        return;
    }
    
    increasing_order(n - 1);
    cout << n << " ";
}

void decreasing_order(int n) {
    if(n == 0) {
        return;
    }
    // Towards the base case.
    // Any statement before the function call is executed when you move towards the base case.
    cout << n << " ";
    decreasing_order(n - 1);
}

int main() {

    int n;
    cin >> n;
    increasing_order(n);
    cout << endl;
    // decreasing_order(n);
    
}

