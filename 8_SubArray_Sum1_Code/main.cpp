#include<iostream>
using namespace std;
// Brute Force Approach O(N^3)
// It works good for small Arrays rather than 
// We are trying out all possible subArrays
// And we are taking O(N^3) to solve this particular problem.


int largestSubarraySum1(int arr[], int n)
{
    int largest_sum {0};
    // (subarray ke)Starting point ko fix karega ye vaala loop
    for(int i {0}; i < n; i++)
    {
        // (subarray ke)Ending Point ko fix karega ye vaala loop
        for(int j {i}; j < n; j++)
        {
             int subarraySum {0};
            // Iterating from starting to ending (jitne bhi elements aayenge iske andar unko sum karlega).
            for(int k {i}; k <= j; k++)
            {
                subarraySum += arr[k];

            }
            //Put a check is subarraySum > largest_sum

            largest_sum = max(largest_sum, subarraySum);
        }
    }
    return largest_sum;
}
    

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << largestSubarraySum1(arr, n) << endl;

    return 0; 

}