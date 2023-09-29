#include<iostream>
using namespace std;
// Binary Search Algorithm:
// Divide & Conquer the problem.
// Algorithm that works on sorted Array.
// Divide the N condition into N/2.
/*
// Summary:
1. start = 0, end = n - 1;
2. while(start <= end)
{
    find midpoint.
    Do comparison at mid:
    -> equal to mid.
    -> Greater than mid.
    -> Less than mid.
    -> Accordingly move left or right.    
}
3. If we are out of the loop then return -1.
4. If it is equal return midpoint.
5. Binary Search is Fast & Efficient.
6. The Only condition required is Search space is in Sorted order.
7. Or we can say search space is should be in Monotonic Way(i.e. Either in Increasing order or Decreasing Order.)
*/

int Binary_Search(int arr[], int n, int key)
{
    int s {0};
    int e {n - 1};
    
    // This loop depends upon the value of n.
    while(s <= e)
    {
        // The work Does not depend upon the value of n
        int mid = (s + e) / 2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
             e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 45, 60, 70, 89};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;

    int index = Binary_Search(arr, n, key);
    if(index != -1)
    {
        cout << key << "is Present at index " << index << endl;
    }
    else
    {
        cout << key << "is Not Found! " << endl;

    }

    return 0;
}