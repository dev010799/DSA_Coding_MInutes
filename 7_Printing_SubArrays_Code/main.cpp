#include<iostream>
using namespace std;
/*

What is SubArray?
1.SubArray is smaller part of a array.(Continuous smaller part of array).
2.i.e. [1,2,3,4,5] , [1,2] are SubArray, [2,3,4] are SubArray.
3.[1,2,5] are Not a SubArray because this are not in Consecutive Manner.
4.All this loops are N times
5.Roughly we are doing O(N)^3 work for this particular example.
*/

/*


10
1020
102030
10203040
1020304050
102030405060


20
2030
203040
20304050
2030405060


30
3040
304050
30405060


40
4050
405060


50
5060


60

*/

void printSubArrays(int arr[], int n)
{
    // This two loops i.e. i & j loops start and end point of the SubArray. 
    for(int i {0}; i < n; i++)
    {
        for(int j {i}; j < n; j++)
        {
            // This loop will give us one particular SubArray.
            for(int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << endl;
        }
        // cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    printSubArrays(arr,n);

    return 0;

}