#include<iostream>
using namespace std;
// Concept:
// Put the Largest element to the last.

void bubble_sort(int arr[], int n)
{
    for(int times = 1; times <= n - 1; times++)
    {
        for(int j = 0; j <= n - times - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);

    for(auto x: arr)
    {
        cout << x << ",";
    }
    return 0;
}

// *********************************************** //




/***************************************
 OPTIMISED BUBBLE SORT CODE 
*****************************************/
/*
#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> arr){
    // your code  goes here
    int i, j, n=arr.size();
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(arr[j], arr[j+1]);
           swapped = true;
        }
     }
 
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
   
   return arr;
}

*/

