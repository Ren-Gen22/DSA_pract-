#include<bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val=data;
        left=right=NULL;
    }
};

map<int,int> mp;

void topView(Node * root) {
    if(!root)
        return;

    mp.insert({0,root->val});

    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        Node *tmp=q.front().first;
        int dis=q.front().second;
        q.pop();

        if(tmp->left){
            q.push({tmp->left,dis-1});

            if(mp.find(dis-1)==mp.end()){
                mp.insert({dis-1,tmp->left->val});
            }
        }

        if(tmp->right){
            q.push({tmp->right,dis+1});

            if(mp.find(dis+1)==mp.end()){
                mp.insert({dis+1,tmp->right->val});
            }
        }
    }

    for(auto i : mp){
        cout<<i.second<<" ";
    }

}

int main(){
    Node* root=new Node(7);
    root->left=new Node(6);
    root->right=new Node(5);
    root->left->left=new Node(4);
    root->left->right=new Node(3);
    topView(root);
    return 0;
}
