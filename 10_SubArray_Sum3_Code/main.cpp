#include<iostream>
using namespace std;
// Kadane's Algorithm.
// The beauty of this Algorithm is it works in LINEAR TIME.
// We will ignore the negative part of array and take 0 i.e(-2 = 0).
// This loop runs in O(N) time.
// Space complexity = O(1).

/*

Output:
11.

*/

int maximum_subarray_sum(int arr[], int n)
{
    int cs = 0;
    int largest = 0;

    for(int i {0}; i < n; i++)
    {
        cs = cs + arr[i];
        if(cs < 0)
        {
            cs = 0;
        }
        largest = max(largest, cs);
    }
    return largest;

}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << maximum_subarray_sum(arr, n) << endl;

    return 0;
}