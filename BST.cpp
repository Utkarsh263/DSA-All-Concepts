// Binary Search Tree


// Build a BST from an Array
 
// #include <iostream>
// using namespace std; 

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// Node* insert(Node* root , int val){
//     if(root==NULL){
//         root = new Node(val);
//         return root;
//     }

//     if(val>root->data){
//         root->right=insert(root->right, val);
//     }else{
//         root->left =insert(root->left , val);
//     }

//     return root;
// }

// Node* buildbst(int arr[], int n){
   
//     Node* root= NULL;

//     for(int i=0; i<n; i++){
//         root = insert(root, arr[i]);
//     }

//     return root;
// }

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// int main(){

//     int arr[6]= {5,1,3,4,2,7};

//     Node* root = buildbst(arr,6);
//     inorder(root);
// }

// Search in bst 

// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// Node* insert(Node* root , int val){
//     if(root == NULL){
//         root = new Node(val);
//         return root;
//     }

//     if(root->data <val){
//         root->right = insert(root->right, val);
//     }else{
//         root->left = insert(root->left, val);
//     }

//     return root;
// }

// Node* buildbst(int arr[], int n){
//     Node* root = NULL;

//     for(int i=0; i<n; i++){
//         root= insert(root, arr[i]);
//     }

//     return root;
// }

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);

// }

// bool search(Node* root , int key){
//     if(root == NULL){
//         return false;
//     }

//     if(root->data == key){
//         return true;
//     }else if(root->data <key){
//         return search(root->right, key);
//     }else{
//         return search(root->left , key);
//     }
//     return false;
// }

// int main(){
//     int arr[6]={2,4,1,6,8,5};

//     Node* root = buildbst(arr, 6);
//     inorder(root);


//     cout<<endl<<search(root, 6);
// }


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

Node* insert(Node* root, int val){
    if(root == NULL){
        root = new Node(val);
    }

    if(root->data >val){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right , val);
    }

    return root;
}

bool search(Node* root , int key){
    if(root == NULL){
        return false;
    }

    if(root->data == key){
        return true;
    }else if(root->data >key){
        return search(root->left, key);
    }else{
        return search(root->right,key);
    }

    return false;
}

Node* buildbst(int arr[], int n){
    
    Node* root =NULL;

    for(int i=0; i<n; i++){
        root= insert(root , arr[i]);
    }

    return root;
}



