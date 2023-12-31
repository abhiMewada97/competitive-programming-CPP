#include <bits/stdc++.h>

using namespace std;
void preOrder(struct Node*);
void inOrder(struct Node*);
void postOrder(struct Node*);

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(){
    struct Node *root  = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    
    return 0;
}

//*******************************************************
void preOrder(struct Node *root){
    
    if(root == NULL){
        return;
    }
    cout <<root->data <<" ";

    preOrder(root->left);
    preOrder(root->right);
}
//*******************************************************
void inOrder(struct Node *root){

    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data <<" ";
    inOrder(root->right);
}
//*******************************************************
void postOrder(struct Node *root){

    if(root == NULL){
        return;
    }
    inOrder(root->left);
    inOrder(root->right);
    cout << root->data <<" ";
}