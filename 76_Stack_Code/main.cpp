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

// <********************************************************************************************>

// Question: Reverse a string using stack.

int main() {
    string str = "DevMishra";
    stack<char> s;

    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while(!s.empty()) {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << "Answer is " << ans << endl;
    return 0;
}

// Output : arhsiMveD


// <********************************************************************************************>
// Question: Delete Middle Element from stack.

void solve(stack<int> &inputStack, int count, int size) {
    // Base Case
    if(count = size/2) {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    // Recursive Call
    solve(inputStack, count + 1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N) {
    int count = 0;
    solve(inputStack, count, N);
}


// <********************************************************************************************>
// Question: Valid Parenthesis.

bool isValidParenthesis(string expression) {
    stack<char> s;
    for (int i = 0 ; i < expression.length(); i++) {
        char ch = expression[i];

        // if opening bracket, stack push
        // if close bracket, stacktop check and pop

        if(ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else {
            // for closing bracket.
            if(!s.empty()) {
                char top = s.top();
                if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[') ){
                    s.pop();
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }
    }
    if(s.empty()) {
        return true;
    }
    else {
        return false;
    }
}

// <********************************************************************************************>
// Question: Insert An Element At Its Bottom in a given Stack

void solve(stack<int> &s, int x) {
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    solve(s, x);
    s.push(num);


}

stack<int> pushAtBottom(stack<int> &myStack, int x) {
    solve(myStack, x);
    return myStack;
}


// <********************************************************************************************>
// Question: Reverse Stack using Recursion.

void insertAtBottom(stack<int> &stack, int element) {
    // Base Case:
    if(stack.empty()) {
        stack.push(element);
        return;
    }

    int num = stack.top();
    stack.pop();

    // Recursive Call:
    insertAtBottom(stack, element);
    stack.push(num);
}
void reverseStack(stack<int> &stack) {
    // Base Case:
    if(stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop(); 

    // Recursive Case:
    reverseStack(stack);

    // insertAtBottom(stack, element);
}

// <********************************************************************************************>
// Question: Sort a Stack

void sortedInsert(stack<int> &stack, int num) {
    // Base Case:
    if(stack.empty() || (!stack.empty() && stack.top() < num)) {
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();

    // Recursive Case:
    sortedInsert(stack, num);
    stack.push(num);

}
void sortStack(stack<int> &stack) {
    // Base Case:
    if(stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    // Recursive Case:
    sortStack(stack);
    // sortedInsert(stack, num);
}
*/
// <********************************************************************************************>
// Question: Redundant Brackets.
bool findRedundantBrackets(string &s) {
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else {
            // ch is ')' or lower case letter
            if(ch == ')') {
                bool isRedundant = true;
                while(st.top() != '(') {
                    char top = st.top();
                    if(top == '(' || top == '+' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant == true) 
                    return true;
                st.pop();
            }

        }

    }
    return false;
}