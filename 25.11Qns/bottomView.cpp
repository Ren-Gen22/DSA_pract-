#include<bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val = data;
        left = right = NULL;
    }
};

void bottomView(Node* root){
    if(root == NULL) return;
    unordered_map<int, int> m;
    queue<pair<Node*, int>> q;
    q.push(make_pair(root, 0));
    int min_hd = 0, max_hd = 0;

    while(!q.empty()){
        pair<Node*, int> p = q.front();
        Node *n = p.first;
        int val = p.second;
        q.pop();

        m[val] = n->val;

        min_hd = min(min_hd, val);
        max_hd = max(max_hd, val);
        if(n->left != NULL) q.push(make_pair(n->left, val - 1));
        if(n->right != NULL) q.push(make_pair(n->right, val + 1));
    }

    for(int i = min_hd; i <= max_hd; ++i){
        cout << m[i] << " ";
    }
}

int main(){
    Node* root = new Node(7);
    root->left = new Node(6);
    root->right = new Node(5);
    root->left->left = new Node(4);
    root->left->right = new Node(3);

    cout << "Bottom View: ";
    bottomView(root);
    return 0;
}
