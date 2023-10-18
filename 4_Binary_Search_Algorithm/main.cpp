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

// *************************************************************************************************************************

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


/*                          Minimum Common value (2540) Leet code (Easy Level)

// Input: nums1 = [1,2,3], nums2 = [2,4]
// Output: 2
// Explanation: The smallest element common to both arrays is 2, so we return 2.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public: 
        int getCommon(vector<int>& nums1, vector<int>& nums2) {
            int s = 0, e = 0;

            while(s < nums1.size() && e < nums2.size()) {
                if(nums1[s] == nums2[e]) 
                return nums1[s];
                else if(nums1[s] < nums2[e])
                s++;
                else
                e++;
            }
            return -1;
        }
};


/*******************Problem 69 of LC Sqrt(x)**************************************/
// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public: 
        int mySqrt(int x) {
            if(x == 0) 
                return x;
        
        int first = 1, last = x;
        while(first <= last) {
            int mid = first + (last - first) / 2;

            if(mid = x / mid) 
                return mid;

            else if(mid * mid > x)
                last =  mid - 1;

            else {
                 first = mid + 1;
            }
        }
        return last;
    }
};



