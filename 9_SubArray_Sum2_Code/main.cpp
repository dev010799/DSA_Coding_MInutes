#include<iostream>
using namespace std;
// Prefix Sum Approach:
// This approach works in O(N^2) times.
// Why it takes O(N^2) times because,
//  

/*

Output:
11.

*/

int largestSubarraySum2(int arr[], int n)
{
    int prefix[100] = {0};
    prefix[0] = arr[0];
    
    // Why we take i {1} because if we take 0 the index should be -1 i.e.Not a correct index.
    // This loop is independent so this loop works in O(N) time.
    for(int i {1}; i < n; i++)
    {
        // This formula is applicable if value of i >= 1.
        prefix[i] = prefix[i - 1] + arr[i];
        
    }
    
    // largest sum login.
    int largest_sum = 0;
    
    // This 2 loops works in O(N^2) times.
    // Thats why overall Time Complexity is O(N^2).
    for(int i {0}; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            largest_sum = max(largest_sum, subarraySum);
        }
    }
    return largest_sum;
}

int main()
{ 
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    // cout << largestSubarraySum1(arr, n) << endl;
    cout << largestSubarraySum2(arr, n) << endl;

    return 0;

}