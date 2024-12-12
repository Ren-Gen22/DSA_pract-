#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* head = NULL; 

void display(){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

void insert(int v) {
    if (head == NULL) {
        head = new Node(v); 
        return;
    }
    Node* root = head;
    while (root->next != NULL) {
        root = root->next;
    }
    root->next = new Node(v); 
}

void insertMid(int pos,int v){
    --pos;
    if(head==NULL){
        cout<<"Empty Linked List";
        return;
    }
    int i=0;
    Node* root=head;
    while(i<=pos){
        if(root==NULL && i!=pos){
            cout<<"List size less than target";
            return;
        }
        if(i==pos){
            Node* newNode= new Node(v);
            newNode->next=root->next;
            root->next=newNode;
        }
        root=root->next;
        i++;
    }


}

// void deleteNode(){
//
// }

int main() {
    vector<int> arr{1, 2, 3, 4, 5};
    for (auto i : arr)
        insert(i);

    display();
    insertMid(1,69);
    display();
    return 0;
}

