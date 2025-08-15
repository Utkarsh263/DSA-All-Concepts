// Queues Implementation using Linked List 

// #include <iostream>
// #include <vector>
// #include <string>
// #include <queue>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int val){
//         data= val;
//         next=NULL;

//     }   
// };

// class Queue{
// public:
//     Node* head;
//     Node* tail;

//     Queue(){
//         head=tail=NULL;
//     }

//     void push(int data){
//         Node* newNode = new Node(data);
//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             tail->next= newNode;
//             tail= newNode;
//         }
//     }

//     void pop(){
//         if(empty()){
//             cout<<"Queue is empty !";
//             return;
//         }
//         Node* temp= head;
//         head= head->next;
//         delete temp;

//     }

//     int front(){
//         return head->data;
//     }

//     bool empty(){
//         return head==NULL;
//     }
// };

// int main(){
//     Queue q;

//     for(int i=0; i<5;i++){
//         q.push(i);
//     }
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }

// Circular Queue using an array


// #include <iostream>
// #include <vector>
// #include <string>
// #include <queue>
// using namespace std;

// class Queue{
//     int* arr;

//     int capacity;
//     int currSize;

//     int front, rear;
// public:
//     Queue(int val){
//         capacity= val;
//         arr = new int[capacity];
//         currSize=0;

//         front=rear=-1;
//     }

//     void push(int data){
//         if(currSize== capacity){
//             cout<<"Queue is full"<<endl;
//             return;
//         }
//         if(currSize ==0){
//             front=rear=0;
//         }else{
//             rear= (rear+1)%capacity;
//         }
//         arr[rear]= data;
//         currSize++;
//     }

//     void pop(){
//         if(empty()){
//             cout<<"Queue is empty"<<endl;
//             return ;
//         }
//         if(currSize==1){
//             front=rear=-1;
//         }else{
//             front = (front+1)%capacity;
//         }
//         currSize--;
//     }

//     int frontElement(){
//         if(empty()){
//             cout<<"Caannot get element as Queue is empty";
//             return -1;
//         }
//         return arr[front];
//     }

//     bool empty(){
//         return currSize==0;
//     }
// };

// int main(){

//     Queue q(4);

//     for(int i=0; i<5; i++){
//         q.push(i);
//     }

//     while(!q.empty()){
//         cout<<q.frontElement()<<" ";
//         q.pop();
//     }

// }

// Queue using Stl

// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){

//     queue<int> q;
//     for(int i=0; i<5; i++){
//         q.push(i);
//     }

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     return 0;
// }

//Queue using 2 stacks

// #include <iostream>
// #include <stack>
// using namespace std;

// class Queue{
//     stack<int> s1;
//     stack<int> s2;
// public:
//     void push(int data){
//         // s1->s2
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }

//         s1.push(data);

//         while(!s2.empty()){
//            s1.push(s2.top());
//            s2.pop(); 
//         }
//     }

//     void pop(){
//         s1.pop();
//     }

//     int front(){
//         return s1.top();
//     }
//     bool empty(){
//         return s1.empty();
//     }
// };

// int main(){

//     Queue q;
//     for(int i=0; i<5; i++){
//         q.push(i);
//     }
//     for(int i=0;i<5; i++){
//         cout<< q.front()<<" ";
//         q.pop();
//     }
// }

// Stacks using 2 Queues


// #include <iostream>
// #include <queue>
// using namespace std;

// class Stack{
//     queue<int> q1;
//     queue<int> q2;
// public:
//     void push(int data){
//         while(!q1.empty()){ // Q1 -> Q2
//             q2.push(q1.front());
//             q1.pop();
//         }

//         q1.push(data);// Push data

//         while(!q2.empty()){ // Q2 -> Q1
//             q1.push(q2.front());
//             q2.pop();
//         }
//     }

//     void pop(){
//         q1.pop();
//     }

//     int top(){
//         return q1.front();
//     }

//     bool empty(){
//         return q1.empty();
//     }
// };

// int main(){

//     Stack s;
//     for(int i=0; i<10; i++){
//         s.push(i);
//     }

//     while(!s.empty()){
//         cout<< s.top()<<" ";
//         s.pop();
//     }
//}



// First Non Repeating Letter

// #include <iostream>
// #include <string>
// #include <queue>
// using namespace std;

// void NonRepeating(string str){
//     queue<char> q;
//     int freq[26]={0};

//     for(int i=0; i<str.size(); i++){
//         char ch = str[i];
//         q.push(ch);
//         freq[ch-'a']++;

//         while(!q.empty() && freq[q.front()-'a']>1){
//             q.pop();
//         }

//         if(q.empty()){
//             cout<< "-1"<<" ";
//         }else{
//             cout<<q.front()<<" ";
//         }
//     }
// }

// int main(){

//     string str= "aabccxb";
//     NonRepeating(str);
//     return 0;
// }

// Interleave two queue

// #include <iostream>
// #include <queue>
// using namespace std;

// void Interleave(queue<int>q){
//     queue<int> q1;

//     int n= q.size()/2;

//     for(int i=0; i<n; i++){
//         q1.push(q.front());
//         q.pop();
//     }

//     while(!q1.empty()){
//         q.push(q1.front());
//         q1.pop();
//         q.push(q.front());
//         q.pop();
//     }

//     while(!q.empty()){
//         cout<< q.front()<<" ";
//         q.pop();
//     }
// }

// int main(){

//     queue<int> q;
//     for(int i=1; i<11; i++){
//         q.push(i);
//     }
//     Interleave(q);

//     // while(!q.empty()){
//     //     cout<< q.front()<<" ";
//     //     q.pop();
//     // }
// }


// Queue Reversal

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void queueReversal(queue<int> q){
    stack<int> s;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }


    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}


int main(){

    queue<int> q;

    for(int i=0; i<11; i++){
        q.push(i);
    }

    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    cout<<"After Reversing Queue"<<endl;

    queueReversal(q);
    return 0;
}


