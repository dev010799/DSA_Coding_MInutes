#include<iostream>
using namespace std;
/*

In main 24
1
2
3
4
5
6
In Function 8
1
2
3
4
5
6

*/

void printArray(int * arr, int n)
{
    cout << "In Function " << sizeof(arr) << endl;
    arr[0] = 100;

    for(int i {0}; i < n; i++)
    {
        cout << arr[i] << endl;
    }

}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    cout << "In main " << sizeof(arr) << endl;
    
    printArray(arr, n);

    for(int i {0}; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;

}