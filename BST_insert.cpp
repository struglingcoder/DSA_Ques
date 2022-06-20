#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* insertBst(Node *root, int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left = insertBst(root->left,val);
    }else{
        root->right = insertBst(root->right,val);
    }
    return root;
}

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
    return;
}

int main() {
    Node* root=NULL;
    root= insertBst(root,5);
    insertBst(root,1);
    insertBst(root,3);
    insertBst(root,4);
    insertBst(root,2);
    insertBst(root,7);
    inOrderTraversal(root);
    cout<<endl;
	return 0;
}
