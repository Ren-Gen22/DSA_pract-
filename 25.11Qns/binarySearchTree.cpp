#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int in){
        data=in;
        left=right=NULL;
    }
};

void bstValidator(Node* root,vector<int>& arr){
    if(root==NULL) return;
    bstValidator(root->left, arr);
    arr.push_back(root->data);
    bstValidator(root->right, arr);
}

int main(){
    Node* root=new Node(50);
    root->left=new Node(20);
    root->right=new Node(80);
    root->left->left= new Node(60);
    root->left->right=new Node(30);
    vector<int> arr;
    bool f=true;
    bstValidator(root,arr);
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
        f=false;
        break;
        }
    }
    if(f) cout<<"Valid BST";
    else cout<<"Invalid BST";
    return 0;
}

