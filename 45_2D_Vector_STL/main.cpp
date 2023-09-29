#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9, 10},
        {11, 12}
    };

    //Update the value in 0th row and 0th column.
    // arr[0][0] += 10;

    for(int i{0}; i < arr.size(); i++) {
        for(auto number: arr[i]) {
            cout << number << " ";
        }
        cout << endl;
    }
    return 0;
}