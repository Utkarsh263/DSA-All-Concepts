
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};


Node* buildtree(){
    int val;
    cout<<"Enter the root node value";
    cin>>val;

    if(val==-1){
        return NULL;
    }

    Node* root = new Node(val);
    cout<<"Enter the left child of"<<val<<":";
    root->left = buildtree();
    cout<<"Enter the right child of"<<val<<":";
    root->right= buildtree();

    return root;
}

int main(){
    cout<<"Build the tree:\n";
    Node* root = buildtree();
}