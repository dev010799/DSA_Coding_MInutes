#include<iostream>
#include<string>
#include<vector>
using namespace std;

// int main() {

    // char s[1000] = {'1','a','b','c','\0'};
    // string s;  // "Hello World";             // Dynamic Array.(i.e. Size can be change at Run time.)
    // The third argument is the Deliminator where it tells this function to stop.

    // getline(cin, s, '.');

    // for(char ch : s) {
    //     cout << ch << ",";
    // }
    // cout << s << endl;
    /*
    output:
    hello world .
    h,e,l,l,o, ,w,o,r,l,d, ,hello world

    */
   // ==============================================================================

    


  // }


//   int main() {

//     string s;
//     int n = 5;
//     vector<string> sarr;

//     string temp;

//     while(n--) {
//         getline(cin, temp);
//         sarr.push_back(temp);
//     }

//     for(string x: sarr) {
//         cout << x << "," << endl;

//     }


//   }

// ========================================================

   
#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    
	int count_=1;
    string ans;
	
    for(int i=0;i<chars.size();i++)
    {
        while(i<chars.size()-1 && chars[i+1] == chars[i])
        {
            count_++;
            i++;
        }
        ans += chars[i];
        if(count_ == 1)
        {
            continue;
        }
        ans += to_string(count_);
        count_ = 1;
    }
    
     chars.clear();
    
     for(int i=0;i<ans.size();i++)
     {
          chars.push_back(ans[i]);
     } 
 
    return chars.size();
}








