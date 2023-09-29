#include<iostream>
#include<vector>
using namespace std;

// Vectors are sequence contaiers representing arrays that can change in size.
// Just like arrays, vectors use contiguous storage locations fortheir elements,
// which means that their elements can also be accessed directly in O(1) time.
// But ulike arrays, their size can change dynamically, with their storage being handled automatically by the container.
// At the Memory level:
// It will create a new array of size 2X where X is the size of the previous array and all the elements.
// The previous Array will be copied into the new array.
// The previous will get destroyed and a new array will have a bigger size.

// IMPORTANT POINTS:
// Vectors can be used to create Dynamic 1D & 2D Arrays.
// We will be using vectors throughout this course in place of a regular array.
// Unlike arrays, vectors are passed by value to a function, 
// you may can still them by reference if need arises.

int main()
{

    // Fill Constructor:
    vector<int> arr(10, 7);
    // Fill Constructor:
    vector<int> visited(100,0);
    // Demo Vector:
    // vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
    arr.pop_back();
    arr.pop_back();

    // Push_back :
    arr.push_back(16);
    
    // // Size of the vector(No of elements.)
    // cout << arr.size() << endl;
    // // o/p = 7

    // // Capacity of the vector(It shows How much memory is Allocated.)
    // cout << arr.capacity() << endl;

    // print all the elements
    for(int i {0}; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
