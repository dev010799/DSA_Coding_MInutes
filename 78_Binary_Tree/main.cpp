#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
    public: 
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL; 
    }
};

node* buildTree(node* root) {
    // node* root = NULL;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left" << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for inserting in right" << endl;
    root -> right = buildTree(root -> right);
    return root;

}

int main() {
    node* root = NULL;

    // creating a Tree
    root = buildTree(root);


    return 0;
}