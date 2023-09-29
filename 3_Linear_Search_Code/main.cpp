#include<iostream>
using namespace std;
// Linear Search(Brute Force Technique).
// Searching Algorithm to find the index of element in a given array.
// Worst case scenario:
// Larger is the value of (n) the larger is the time taken.
// It is going to be a Linear function of  n.
// i.e Linear search has a complexity of O(N) Time.

/*

///////output///////

4
4is present at index5

19
19is not Found!


*/

int linear_search(int arr[], int n, int key)
{
    for(int i {0}; i < n; i++)
    // check if current element matches with the key
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    // Out of the loop
    return -1;                    // If the element is not Present inside array.

    

}

int main()
{
    int arr[] = {10, 15, 12, 9, 6, 4, 3, 10, 8};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin >> key;

    int index = linear_search(arr, n, key);
    if(index != -1)
    {
        cout << key << "is present at index" << index << endl;
    }
    else
    {
        cout << key << "is not Found!" << endl;
    }


    return 0;

}