/*
#include<iostream>
using namespace std;

int factorial(int n) {
    // Base Case:
    if(n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;
    return 0;
}
*/

// Rat in a Maze Problem:

#include<bits/stdc++.h>
using namespace std;

// Maze Size
#define N 4

bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]);

// A utility function to print solution matrix sol[N][N]
void printSolution(int sol[N][N]) 
{
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            cout << " " << sol[i][j] << " ";
        cout << endl;
    }
}

// A utility function to check if x, y is valid index for
// N*N maze

bool isSafe(int maze[N][N], int x, int y) 
{
    // if(x, y outside maze) return false
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] ==  1)
        return true;
    return false;
}






