#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// pair<int, int> closestSum(vector<int> arr, int x)
// {
//     int n = arr.size();
//     int s = 0, e = n - 1;
//     int absDiff = INT_MAX;
//     int leftIdx, rightIdx;
    
//     while(s < e)
//     {
//         int cs = arr[s] + arr[e];
//         // Update the diffrence.
//         if(abs(cs - x) < diff)
//         {
//             leftIdx = s;
//             rightIdx = e;
//             diff = abs(cs - x);
//         }
//         if(cs > x)
//         {
//             e--;
//         }
//         else
//         {
//             s++;
//         }
//     }
//     return {arr[leftIdx], arr[rightIdx]};
// }

// int main()
// {
    
// }