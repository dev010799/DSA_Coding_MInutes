#include<iostream>
#include<Stack>
using namespace std;

/*
class Stack {
    // Properties
    public: 
        int *arr;
        int top;
        int size;

    // Behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "stack overflow" << endl;
        }

    }

    void pop() {
        if(top >= 0) {
            top--;
        }
        else {
            cout << "stack underflow" << endl;
        }

    }
    
    int peek() {
        if(top >= 0 && top < size)
        return arr[top];
        else {
            cout << "stack is empty" << endl;
            return -1;
        }

    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }

    }


};

int main() {

    Stack st(5);
    
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;
    
    st.pop();
    cout << st.peek() << endl;

    st.push(789);
    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is non-empty" << endl;
    }

    st.pop(); 
    cout << st.peek() << endl;

    if (st.isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is non-empty" << endl;
    }
     
    
    // // creation of stack
    // stack<int> s;
    
    // // Push Operation
    // s.push(2);
    // s.push(3);

    // // Pop Operation
    // s.pop();

    // // Top/Peak operation
    // cout << "Printing top element: " << s.top() << endl;
    
    // // Isempty operation:

    // if(s.empty()) {
    //     cout << "Stack is empty " << endl;
    // }
    // else {
    //     cout << "Stack is fulfilled " << endl;
    // }

    return 0;
}
*/

// <-------------------------------------------------------------------------------------------->
// Question: Implement 2 stacks in an array:
class TwoStack {
    int *arr;
    int top1;
    int top2; 
    int size;

public: 
    // Initialize TwoStack
    TwoStack(int s) {
        this -> size = s;
        top1 = -1;          // Left to right
        top2 = s;           // Right to left
        arr = new int[s];
    }

    // Push in stack 1.
    
    void push1(int num) {
        //atleast a empty space is present
        if(top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        }
        else {
            cout << "Stack overflow" << endl;
        }

    }

    // Push in stack 2.
    
    void push2(int num) {
        if(top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
        }
        else {
            cout << "Stack Overflow" << endl;
        }   
    }
    // Pop in stack 1.
    int pop1() {
        if(top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else {
            return -1; 
        }
    }
    // Pop in stack 2.
    int pop2() {
        if(top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else {
            return -1;
        }
    }
};

