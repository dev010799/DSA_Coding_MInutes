#include<iostream>
#include<vector>
using namespace std;

/*
Given a string, find all subsets of the  given string.

input:
abc

output:
""a,b,c,ab,bc,ac,abc

*/

// bool compare(string a, string b) {
//     if(a.length() == b.length()) {
//         return a < b;
       
//     }
//      return a.length() < b.length();
// }
// void findSubsets(char *input, char *output, int i, int j, &list) {
//     // Base Case:
//     if(input[i] == '\0') {
//         output[j] = '\0';
//         string temp(output);
//         list.push_back(temp);
//         return;
//     }
//     // rec case:
//     // Include the ith letter
//     output[j] = input[i];
//     findSubsets(input, output, i + 1, j + 1, list);
//     //Exclude the ith letter
//     findSubsets(input, output, i + 1, j, list);
// }

// int main() {
//     char input[100];
//     char output[100];
//     cin >> input;
//     findSubsets(input, output, 0, 0);
// }




