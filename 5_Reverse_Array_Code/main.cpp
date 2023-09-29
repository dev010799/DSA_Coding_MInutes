#include<iostream>
using namespace std;

void Reverse_Array(int arr[], int n)
{
    int s {0};
    int e {n - 1};
    
    // This loop is running N/2 times.
    // So We can say this is Proportional to the number of items in Array.
    // It takes O(N) time.
    // Also We are not taking any extra space i.e.Space complexity is O(1).
    while(s < e)
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }

}

int main()
{
    int arr[] = {10, 20, 30, 45, 60, 80, 90};
    int n = sizeof(arr) / sizeof(int);
    Reverse_Array(arr, n);

    // Print the output:
    for(int i {1}; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}

