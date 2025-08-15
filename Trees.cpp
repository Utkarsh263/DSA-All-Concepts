// Trees 

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


// Node* buildtree(){
//     int val;
//     cout<<"Enter the root node value";
//     cin>>val;

//     if(val==-1){
//         return NULL;
//     }

//     Node* root = new Node(val);
//     cout<<"Enter the left child of"<<val<<":";
//     root->left = buildtree();
//     cout<<"Enter the right child of"<<val<<":";
//     root->right= buildtree();

//     return root;
// }

// void preorder(Node* root){
//     if(root==NULL){
//         return ;
//     }
//     cout<< root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(Node* root){
//     if(root==NULL){
//         return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// void postorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }

// int height(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return 1+ max(height(root->left),height(root->right));
// }

// int main(){
//     cout<<"Build the tree:\n";
//     Node* root = buildtree();
//     cout<<endl;
//     preorder(root);
//     cout<<endl;
//     inorder(root);
//     cout<<endl;
//     postorder(root);
//     cout<<endl;
//     cout<<height(root);

//     return 0;
// }

// Diameter of a tree 

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

// Node* buildtree(){

//     int val;
//     cout<<"Enter the root node val";
//     cin>>val;

//     if(val == -1){
//         return NULL;
//     }

//     Node* root = new Node(val);
//     cout<<"Enter value of left of "<<val<<":";
//     root->left=buildtree();
//     cout<<"Enter value of right of"<<val<<":";
//     root->right=buildtree();

//     return root;
// }

// int height(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int left = height(root->left);
//     int right = height(root->right);

//     return 1+ max(left, right);
// }

// int diameter(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int currDiam= 1+ (height(root->left)+ height(root->right));  // O(n)
//     int leftDiam = diameter(root->left);
//     int rightDiam = diameter(root->right);

//     return max(currDiam, max(leftDiam, rightDiam));
// }

// int main(){

//     cout<<"Build the tree"<<endl;
//     Node* root = buildtree();

//     cout<<diameter(root);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data= val;
//         left=NULL;
//         right=NULL;
//     }
// };

// Node* buildtree(){

//     int val;
//     cout<<"Enter the root node value";
//     cin>>val;


//     if(val== -1){
//         return NULL;
//     }

//     Node* root = new Node(val);
//     cout<<"Enter the left of"<<val<<" :";
//     root->left = buildtree();
//     cout<<"Enter the right of"<<val<<":";
//     root->right = buildtree();

//     return root;
// }

// int height(Node* root){
//     if(root == NULL){
//         return 0;
//     }

//     int left = height(root->left);
//     int right = height(root->right);

//     return 1+ max(left, right);
// }

// pair<int,int>diam2(Node* root){
//     if(root == NULL){
//         return make_pair(0,0);
//     }

//     pair<int, int>leftInfo = diam2(root->left);
//     pair<int, int>rightInfo = diam2(root->right);

//     int currDiam = leftInfo.second + rightInfo.second +1;
//     int finaldiam=max(currDiam, max(leftInfo.first, rightInfo.first));
//     int finalHt = max(leftInfo.second, rightInfo.second)+1;

//     return make_pair(finaldiam, finalHt);
// }

// int main(){
//     cout<<"Build the tree \n";
//     Node* root = buildtree();

//     cout<<"Diameter ="<<diam2(root).first <<endl;
//     return 0;
// }

// Subtree of another tree


// #include <iostream>
// #include <vector>
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

// Node* buildtree(){

//     int val;
//     cout<<"Enter the root value";
//     cin>>val;

//     if(val==-1){
//         return NULL;
//     }

//     Node* root = new Node(val);
//     cout<<"Enter the left of"<<val<<":";
//     root->left = buildtree();
//     cout<<"Enter the right of"<<val<<":";
//     root->right = buildtree();

//     return root;

// }

// bool isIdentical(Node* root1, Node* root2){

//     if(root1 == NULL && root2 ==NULL){
//         return true;
//     }else if(root1 == NULL || root2 == NULL){
//         return false;
//     }

//     if(root1->data != root2->data){
//         return false;
//     }

//     return isIdentical(root1->left, root2->left)&&
//         isIdentical(root1->right, root2->right);
// }

// bool isSubtree(Node*root , Node* subroot){
//     if(root == NULL && subroot == NULL){
//         return true;
//     }else if(root == NULL || subroot == NULL){
//         return false;
//     }

//     if(root->data== subroot->data){
//         if(isIdentical(root, subroot)){
//             return true;
//         }
//     }
//     int isleftSubtree = isSubtree(root->left , subroot);
//     if(!isleftSubtree){
//        return isSubtree(root->right, subroot);
//     }
//     return true;
// }

// int main(){

//     Node* root= buildtree();

//     Node* subroot = new Node(2);
//     subroot->left = new Node(4);

//     subroot->right = new Node(5);

//     cout<<isSubtree(root, subroot)<<endl;
// }



// #include <iostream>
// #include <string>
// #include <map>
// using namespace std;

// int main(){

//     map<int, string>m;

//     m[101]="rahul";
//     m[110]="neha";
//     m[131]="rahul";

//     cout<<m.count(101);// to check whether key exists

//     for(auto it:m){
//         cout<<"key =" <<it.first<<"value =" << it.second<<endl;
//     }

//     return 0;
// }

// Top View of the tree


// #include <iostream>
// #include <queue>
// #include <map>
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

// Node* buildtree(){

//     int val;
//     cout<<"Enter the root val"<<" :";
//     cin>>val;

//     if(val==-1){
//         return NULL;
//     }

//     Node* root = new Node(val);
//     cout<<"Enter the left of"<<val<<" :";
//     root->left = buildtree();
//     cout<<"Enter the right of"<<val<<" :";
//     root->right = buildtree();

//     return root;

// }

// void topView(Node* root){
//     queue<pair<Node* , int>>Q;// (Node, HD)
//     map<int, int>m; // (HD, node->data)

//     Q.push(make_pair(root, 0));
//     while(!Q.empty()){
//         pair<Node* , int>curr =Q.front();
//         Q.pop();

//         Node* currNode = curr.first;
//         int currHD = curr.second;

//         if(m.count(currHD)==0){
//             m[currHD] = currNode->data;
//         }

//         if(currNode->left != NULL){
//             pair<Node*, int> left=make_pair(currNode->left, currHD -1);
//             Q.push(left);
//         }

//         if(currNode->right != NULL){
//             pair<Node*, int> right=make_pair(currNode->right, currHD+1);
//             Q.push(right);
//         }
//     }

//     for(auto it:m){
//         cout<<it.second<<" ";
//     }
//     cout<<endl;
// }


// int main(){

//     Node* root = buildtree();

//     topView(root);
//     return 0;

// }


// Kth level of the tree

// #include <iostream>
// #include <queue>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data=val;
//         left=right=NULL;
//     }
// };


// Node* buildtree(){
//     int val;
//     cout<<"Enter the node value";
//     cin>>val;

//     if(val==-1){
//         return NULL;
//     }

//     Node* root = new Node(val);
//     cout<<"Enter the left of"<<val<<" :";
//     root->left = buildtree();
//     cout<<"Enter the right of"<<val<<" :";
//     root->right= buildtree();

//     return root;
// }

// void printkthlevel(Node* root, int k){
//     if(root == NULL){
//         return;
//     }

//     queue<Node*>q;
//     q.push(root);
//     int level=0;

//     while(!q.empty()){
//         int size= q.size();
//         if(level==k){
//             for(int i=0; i<size; i++){
//                 Node* curr = q.front();
//                 q.pop();
//                 cout<<curr->data<<" ";
//             }cout<<endl;
//             return;
//         }
//         for(int i=0; i<size; i++){
//             Node* curr = q.front();
//             q.pop();
//             if(curr->left){
//                 q.push(curr->left);
//             }
//             if(curr->right){
//                 q.push(curr->right);
//             }
//         }
//         level++;
        
//     }
// }

// int main(){
//     Node* root = buildtree();
//     int k;
//     cout<<"Enter k";
//     cin>>k;

//     printkthlevel(root, k);
//     return 0;
// }


// By Recursion 

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


// Node* buildtree(){

//     int val;
//     cout<<"Enter the node val";
//     cin>>val;

//     if(val==-1){
//         return NULL;
//     }

//     Node* root = new Node(val);
//     cout<<"Enter the left of"<<val<<" :";
//     root->left = buildtree();
//     cout<<"Enter the right of"<<val<<" :";
//     root->right = buildtree();

//     return root;

// }

// void Kthhelper(Node* root , int k , int currLevel){
//     if(root == NULL){
//         return;
//     }

//     if(currLevel==k){
//         cout<<root->data<<" ";
//         return;
//     }
//     Kthhelper(root->left , k ,currLevel+1);
//     Kthhelper(root->right , k ,currLevel+1);
// }

// void KthLevel(Node* root, int k){
//     Kthhelper(root, k, 1);
//     cout<<endl;
// }


// int main(){
//     int k, currLevel;    
//     Node* root = buildtree();
//     KthLevel(root,3);

// }


// Lowest Common Ancestor

// #include <iostream>
// #include <vector>
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

// Node* buildtree(){

//     int val;
//     cout<<"Enter the node val"<<":";
//     cin>>val;

//     if(val==-1){
//         return NULL;
//     }
//     Node* root = new Node(val);
//     cout<<"Enter left of "<<val<<":";
//     root->left = buildtree();
//     cout<<"Enter right of "<<val<<":";
//     root->right = buildtree();

//     return root;
// }

// bool rootToNode(Node* root , int n, vector<int>&path){
//     if(root == NULL){
//         return false;
//     }

//     path.push_back(root->data);
//     if(root->data==n){
//         return true;
//     }

//     int isLeft = rootToNode(root->left, n, path);
//     int isRight = rootToNode(root->right, n, path);

//     if(isLeft || isRight){
//         return true;
//     }

//     path.pop_back();
//     return false;
// }


// int LCA(Node* root , int n1, int n2){
//     vector<int> path1;
//     vector<int> path2;

//     rootToNode(root, n1, path1);
//     rootToNode(root, n2, path2);

//     int lca=-1;
//     for(int i=0, j=0; i<path1.size() && j< path2.size(); i++,j++){
//         if(path1[i] != path2[j]){
//             return lca;
//         }
//         lca= path1[i];
//     }
//     return lca;

// }

// int main(){
//     Node* root = buildtree();
//     int n1=4, n2=5;
//     cout<<LCA(root, n1, n2);
//     return 0;
// }



