#include<iostream>
using namespace std;

/*
suppose we have array of [1,2,3,4].
Then the pairs of the above array is:
(1,2) (2,3) (3,4)
(1,3) (2,4)
(1,4)

*/

/*
10,20
10,30
10,40
10,50
10,60

20,30
20,40
20,50
20,60

30,40
30,50
30,60

40,50
40,60

50,60
*/

void PrintAllPairs(int arr[], int n)
{
    for (int i {0}; i < n; i++)
    {
        int x = arr[i];

        // If we take j = 0 in the below loop then we can form all Possible pairs.
        for(int j {i + 1}; j < n; j++)
        {
            int y = arr[j];
            cout << x << "," << y << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    PrintAllPairs(arr, n);
    return 0;

}