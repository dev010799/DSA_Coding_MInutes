#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// int maxSumSubarray(vector<int> arr)
// {
//     // All negative elements:
//     bool allNeg = true;
//     int largest = INT_MIN;

//     for(int x: arr)
//     {
//         if(x > 0)
//         {
//             allNeg = false;
//         }
//         largest = max(largest, x);
//     }

//     // Special Case:
//     if(allNeg)
//     {
//         return largest;
//     }

//     // Kadane's Logic:
//     int cs = 0;
//     int ans = 0;
//     for(int x:arr)
//     {
//         cs = cs + x;

//         if(cs < 0)
//         {
//             cs = 0;
//         }

//         ans = max(ans, cs);
//     }

//     return ans;
// }

//============================================================================//
// Using Class:
class Solution
{
    public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maximum = nums[0];

        for(int i {0}; i < nums.size(); i++)
        {
            sum = sum + nums[i];

            maximum = max(maximum, sum);

            if(sum < 0)
            {
                sum = 0;
            }

        }
        return maximum;

    }
};

