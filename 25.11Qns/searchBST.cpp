#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int in){
        val=in;
        left=right=NULL;
    }
};


Node* search(Node* root, int val) {
  
    if (root == NULL || root->val == val)
        return root;
    if (root->val < val)
        return search(root->right, val);
    return search(root->left, val);
}

void insert(Node* root, int val){
    if(root==NULL){
        root=new Node(val);
    }
    if(root->val < val){
        if(root->right==NULL) root->right=new Node(val);
        else insert(root->right, val);
    }
    else if(root->val > val){
        if(root->left==NULL) root->left = new Node(val);
        else insert(root->left, val);
    }
}

void inOrder(Node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}

void preOrder(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
  
    Node* root = new Node(50);
    // root->left = new Node(30);
    // root->right = new Node(70);
    // root->left->left = new Node(20);
    // root->left->right = new Node(40);
    // root->right->left = new Node(60);
    // root->right->right = new Node(80);

    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,40);
    insert(root,60);
    insert(root,80);

    if(search(root, 50) != NULL)cout << "Found\n";
    else cout << "Not Found\n";
    cout<<endl<<"InOrder ";
    inOrder(root);
     cout<<endl<<"PostOrder "; 
    postOrder(root);
    cout<<endl<<"PreOrder ";
    preOrder(root);
    cout<<endl;
    return 0;
}
