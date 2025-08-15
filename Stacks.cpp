// Stacks

// #include <iostream>
// #include <vector>
// using namespace std;

// // create Stack using vector
// class Stack{
//     vector<int>vec;
// public:
//     void push(int val){ // O(1)
//         vec.push_back(val);
//     }

//     void pop(){  //O(1)
//         if(isEmpty()){
//             cout<<"Stack is empty"<<endl;
//             return;
//         }  
//         vec.pop_back();
//     }

//     int top(){ //O(1)
//         if(isEmpty()){
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//         int lstIdx = vec.size()-1;
//         return vec[lstIdx];
//     }

//     bool isEmpty(){// O(1)
//         return vec.size()==0;
//     }

// };

// int main(){

//     Stack s;
//     for(int i=0; i<=10; i++){
//         s.push(i);
//     }
//     while(!s.isEmpty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }

// Class Template

// #include <iostream>
// #include <vector>
// using namespace std;

// template<class T>
// class Stack{
//     vector<T> vec;
// public:
//     void push(T val){
//         vec.push_back(val);
//     }

//     void pop(){
//         if(isEmpty()){
//             cout<<"Stack is empty";
//             return;
//         }
//         vec.pop_back();
//     }


//     T top(){
//         // if(isEmpty()){
//         //     cout<<"Stack is empty";
//         //     return -1;
//         // }
//         int lastIdx= vec.size()-1;
//         return vec[lastIdx];
//     }

//     bool isEmpty(){
//         return vec.size()==0;
//     }
// };

// int main(){
//     Stack<int> s;

//     for(int i=0 ; i<11; i++){
//         s.push(i);
//     }

//     while(!s.isEmpty()){
//         cout<< s.top()<<" ";
//         s.pop();
//     }

//     return 0;
// }

// //Stack implementation using Liked List

// #include <iostream>
// #include <list>
// #include <string>
// using namespace std;

// template<class T>
// class Stack{
//     list<T> ll;

// public:
//     void push(T val){
//         ll.push_front(val);
//     }

//     void pop(){
//         ll.pop_front();
//     }

//     T top(){
//         return ll.front();
//     }

//     bool isEmpty(){
//         return ll.size()==0;
//     }
// };

// int main(){

//     Stack<int> s;
//     s.push(3);
//     s.push(2);
//     s.push(1);
//     s.push(0);

//     while(!s.isEmpty()){
//         cout<< s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }

// Stack implementation using Linked List

// #include <iostream>
// using namespace std;

// template<class T>
// class Node{
// public:
//     T data;
//     Node* next;

//     Node(T val){
//         data= val;
//         next= NULL;
//     }
// };

// template<class T>
// class Stack{
//     Node<T>* head;
// public:
//     Stack(){
//         head=NULL;
//     }
//     void push_front(T val){
//         Node<T>* newNode = new Node<T>(val);
//         if(head==NULL){
//             head= newNode;
//         }else{
//             newNode->next = head;
//             head= newNode;
//         }
//     }

//     void pop_front(){
//         Node<T>* temp= head;
//         head= head->next;
//         temp->next = NULL;
//         delete temp;
//     }

//     T top(){
//         return head->data;
//     }

//     bool isEmpty(){
//         return head==NULL;
//     }
// };

// int main(){
//     Stack<int> s;

//     s.push_front(3);
//     s.push_front(2);
//     s.push_front(1);
//     s.push_front(0);

//     while(!s.isEmpty()){
//         cout<<s.top()<<" ";
//         s.pop_front();
//     }
//     cout<<endl;
//     return 0;
// }


// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){
//     stack<int> s;

//     s.push(3);
//     s.push(2);
//     s.push(1);
//     s.push(0);

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }

// PushatBottom function of Stack

// #include <iostream>
// #include <stack>
// using namespace std;

// void pushAtBottom(stack<int> &s, int val){
//     if(s.empty()){
//         s.push(val);
//         return;
//     }

//     int temp = s.top();
//     s.pop();
//     pushAtBottom(s, val);
//     s.push(temp);
// }

// int main(){
//     stack<int> s;
//     s.push(3);
//     s.push(2);
//     s.push(1);
//     s.push(0);

//     pushAtBottom(s,4);
//     while(!s.empty()){
//         cout<<s.top()<<' ';
//         s.pop();
//     }
// }


// Reverse a string using stack 

// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// string reverseString(string str, string ans){
    
//     stack<char>s;


//     for(int i=0; i<str.size();i++){
//         s.push(str[i]);
//     }

//     while(!s.empty()){
//         char ch= s.top();
//         ans= ans+ch;
//         s.pop();
//     }
//     return ans;

// }

// int main(){
//     stack<char> s;
//     string str= "Utkarsh";
//     string ans="";

//     ans=reverseString(str, ans);
//     cout<<ans<<endl;
// }


// Reverse a stack using Recursion only

// #include <iostream>
// #include <stack>
// using namespace std;

// void pushatBottom(stack<int> &s,int val){
//     if(s.empty()){
//         s.push(val);
//         return;
//     }

//     int temp= s.top();
//     s.pop();
//     pushatBottom(s, val);
//     s.push(temp);
// }

// void reverseStack(stack<int> &s){
//     if(s.empty()){
//         return;
//     }

//     int temp= s.top();
//     s.pop();
//     reverseStack(s);
//     pushatBottom(s, temp);
// }

// int main(){
//     stack <int> s;
//     s.push(4);
//     s.push(3);
//     s.push(2);
//     s.push(1);
    
//     reverseStack(s);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }

// Stock span problem 

// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// void stockSpanProblem(vector<int> stock , vector<int> span){
//     stack<int> s;
//     s.push(0);
//     span[0]=1;

//     for(int i=1; i<stock.size(); i++){
//         while(!s.empty() && stock[i]>= stock[s.top()]){
//             s.pop();
//         }

//         if(s.empty()){
//            span[i]= i+1; 
//         }else{
//             int prevHigh = s.top();
//             span[i]= i-prevHigh;
//         }
//     }

//     for(int i=0; i<span.size();i++){
//         cout<<span[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> stock= {100,80,60,70,60,85,100};
//     vector <int> span={0,0,0,0,0,0,0};

//     stockSpanProblem(stock, span);
//     return 0;
// }

// Next Greater Element

// #include <iostream>
// #include <vector>
// #include <string>
// #include <stack>
// using namespace std;

// void nextGreater(vector<int> arr, vector<int> &ans){
//     stack <int> s;
//     int idx= arr.size()-1;
//     ans[idx]=-1;
//     s.push(arr[idx]);

//     for(idx= idx-1; idx>=0;idx--){
//         while(!s.empty() && arr[idx]>= s.top()){
//             s.pop();
//         }
//          if(s.empty()){
//             ans[idx]=-1;
//         }else{
//             ans[idx]= s.top();
//         }
//         s.push(arr[idx]);
//     }
   

    
//     for(int i=0; i<ans.size();i++){
//         cout<< ans[i] <<" ";
//     }



// }


// int main(){

//     vector<int>arr={6,8,0,1,3};
//     vector<int> ans= {0,0,0,0,0};

//     nextGreater(arr, ans);
    
//     return 0;
// }

// Valid Parenthesis 

// #include <iostream>
// #include <vector>
// #include <string>
// #include <stack>
// using namespace std;


// bool validparenthesis(string str){
//     stack <char> s;

//     for(int i=0; i<str.size(); i++){
//         char ch = str[i];
//         if(ch == '(' || ch == '[' || ch == '{'){
//             s.push(ch);
//         }else{
//             if(s.empty()){// all closing pairs
//                 return false;
//             }

//             char top= s.top();
//             if((top == '(' && ch == ')') || (top == '[' && ch == ']')||(top == '{' && ch == '}')){
//                 s.pop();
//             }else{
//                 return false;
//             }
//         }
//     }
//     if(s.empty()){
//         return true;
//     }else{
//         return false;
//     }
// }

// int main(){

//     string str1= "{[({)]}";
//     string str2= "{[({})]}";
//     cout<<validparenthesis(str1)<<endl;
//     cout<<validparenthesis(str2)<<endl;

//     return 0;
// }

// Duplicate Parentheses

#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

bool isDuplicateParenthesis(string str){
    stack <char> s;

    for(int i=0; i<str.size(); i++){
        char ch = str[i];

        if(ch != ')'){
            s.push(ch);
        }else{
            if(s.top()=='('){
                return true;
            }

            while(s.top() != '('){
               s.pop(); 
            }
            s.pop();
        }
    }
    return false;
}

int main(){
    string str1  = "((a+b))";
    string str2  = "((a+b)+c)";
    string str3  = "(a+b)";

    cout<< isDuplicateParenthesis(str1)<<endl;
    cout<< isDuplicateParenthesis(str2)<<endl;
    cout<< isDuplicateParenthesis(str3)<<endl;
    
    return 0;
}



