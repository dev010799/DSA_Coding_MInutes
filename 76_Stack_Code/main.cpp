#include<iostream>
#include<stack>
using namespace std;

int main() {
    // creation of stack
    stack<int> s;
    
    // Push Operation
    s.push(2);
    s.push(3);

    // Pop Operation
    s.pop();

    // Top/Peak operation
    cout << "Printing top element: " << s.top() << endl;
    
    // Isempty operation:

    if(s.empty()) {
        cout << "Stack is empty " << endl;
    }
    else {
        cout << "Stack is fulfilled " << endl;
    }

    return 0;
}