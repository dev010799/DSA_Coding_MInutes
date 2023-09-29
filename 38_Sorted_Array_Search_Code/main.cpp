#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int, int> stairCaseSearch(int arr[][4], int n, int m, int key) {
    if(key < arr[0][0] or key > arr[n-1][m-1]) {
        return {-1, -1};
    }
    // StairCase search 
    int i = 0;
    int j = m - 1;

    while(i <= n - 1 and j >= 0) {
        if(arr[i][j] == key) {
            return {i, j};
        }
        else if(arr[i][j] > key) {
            j--;
        }
        else {
            i++;
        }


    }
    return {-1, -1};

}

int main() {
    int arr[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};
    
    int n = 4, m = 4;
    pair<int, int> coords = stairCaseSearch(arr, n, m, 33);
    cout << coords.first << " " << coords.second << endl;

}

/*

#include<bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    int m=v.size();
    int n=v[0].size();
    // // int aux[m][n];
    int M=m;
    int N=n;
    vector<vector<int>> aux = v;
    vector<vector<int>> mat = v;
    int tli=sr, tlj=sc, rbi=er, rbj=ec;
      for (int i=0; i<N; i++)
      aux[0][i] = mat[0][i];
  
  // Do column wise sum
  for (int i=1; i<M; i++)
      for (int j=0; j<N; j++)
         aux[i][j] = mat[i][j] + aux[i-1][j];
  
  // Do row wise sum
  for (int i=0; i<M; i++)
      for (int j=1; j<N; j++)
         aux[i][j] += aux[i][j-1];
 
 
    int res = aux[rbi][rbj];
  
    // Remove elements between (0, 0) and (tli-1, rbj)
    if (tli > 0)
       res = res - aux[tli-1][rbj];
  
    // Remove elements between (0, 0) and (rbi, tlj-1)
    if (tlj > 0)
       res = res - aux[rbi][tlj-1];
  
    // Add aux[tli-1][tlj-1] as elements between (0, 0)
    // and (tli-1, tlj-1) are subtracted twice
    if (tli > 0 && tlj > 0)
       res = res + aux[tli-1][tlj-1];
  
    return res;
}

*/



