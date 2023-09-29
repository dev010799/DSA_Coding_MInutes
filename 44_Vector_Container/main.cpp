#include<iostream>
#include<vector>
using namespace std;

int main() {
    // vector<int> arr {10, 12, 13, 14, 15};

    // Fill Constructor
    vector<int> arr(10, 7);

    // Pop_back().
    //  arr.pop_back();

    // Push_back O(1)
    arr.push_back(16);
    // arr.push_back(20);
    // arr.push_back(9);
    // arr.push_back(8);
    // arr.push_back(5);
    // arr.push_back(2);
   

    // Print all the elements.
    for(int i {0}; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }

    // // Size of the vector.
    // cout << arr.size() << endl;

    // // Capacity of the vector.
    // cout << arr.capacity() << endl;
    return 0;
}