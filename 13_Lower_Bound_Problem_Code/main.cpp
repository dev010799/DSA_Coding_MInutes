#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int Val)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;

    while(s <= e)
    {
        int mid = (s + e) / 2;
        if(arr[mid] <= Val)
        {
            ans = arr[mid];
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;

}
