#include<iostream>
using namespace std;
/*
Question:
---------
Find Displacement: Given a long route containing N, S, E, W directions,
find the shortest path to reach the location.
Sample Input: SNNNEWE.
Sample Output: NNE.
*/
// LOGIC:  
// If the person goes to South then decrement (-y).
// If the person goes to North then increment (y).
// If the person goes to East then increment (x).
// If the person goes to West then Decrement (-x).

int main() {
    char route[1000];
    cin.getline(route, 1000);

    int x = 0;
    int y = 0;

    for(int i = 0; route[i] != '\0'; i++){
        switch(route[i]){
            case 'N': y++;
                     break;

            case 'S': y--;
                     break;

            case 'E': x++;
                     break;
                     
            case 'W': x--;
                     break;
        }

    }

    cout << "Final x and y is " << x << "," << y << ".";

    if(x >= 0 and y >= 0){

        while(y--){
            cout << "N";
        }
        while(x--){
            cout << "E";
        }

    }

}