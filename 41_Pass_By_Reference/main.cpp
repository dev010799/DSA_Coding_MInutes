#include<iostream>
using namespace std;

// void applyTax(int &money) {
//     float tax = 0.10;
//     money = money - money * tax;
// }

// int main() {

//     int income;
//     cin >> income;
//     applyTax(income);
//     cout << income << endl;
//     return 0;
// }

void watchVideo(int *viewsPtr) {
    *viewsPtr = *viewsPtr + 1;
}

int main() {
    int views = 100;
    watchVideo(&views);
    cout << views << endl;
    return 0;
}

