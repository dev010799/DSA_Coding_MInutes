#include<iostream>
using namespace std;

int main(){

    char ch;
    ch = cin.get();          // First character we read from here.

    //Count:
    int alpha = 0;
    int space = 0;
    int digit = 0;

    while(ch != '\n'){
        if(ch >= 0 and ch <= 9){
            digit++;
        }
        else if((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z')){
            alpha++;
        }
        else if(ch == ' ' or ch == '\t'){  
            space++;
        }

        ch = cin.get();      // And the remaining character we read from here.
        

        }
        cout << "Total Alphabets" << alpha << endl;
        cout << "Total Spaces" << space << endl;
        cout << "Total Digits" << digit << endl;

    // =====================================================================================

    // char sentence[1000];
    // cin >> sentence;
    // cout << sentence;
    // char temp = cin.get();
    //  int len = 1;
    //  while(temp != '#'){
    //     len++;
    //     cout << temp;

    //     // Update the value of temp
    //     temp = cin.get();
    //  }
    //  cout << "Length" << len << endl;

    // ======================================================================================
    // char sentence[1000];
    // char temp = cin.get();

    // int len = 0;

    // while(temp !='\n'){
    //     sentence[len++] = temp;
    //     // update the value of temp.
    //     temp = cin.get();
    // }
    // sentence[len] = '\0';
    // cout << "Length" << len << endl;
    // cout << sentence << endl;
  
    return 0;
}

