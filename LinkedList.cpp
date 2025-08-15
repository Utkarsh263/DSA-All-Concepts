//Linked List


// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data; 
//     Node* next;


//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// class List{
//     Node* head; 
//     Node* tail;

// public:
//     List(){
//         head=NULL;
//         tail=NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             newNode->next = head;
//             head= newNode;
//         }
//     }

//     void print(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<"->";
//             temp=temp->next;
//         }
//         cout<<"NULL";
//     }
// };

// int main(){
//     List ll;
//     for(int i=4; i>=0; i--){
//         ll.push_front(i);
//     }
//     ll.print();

//     return 0;
// }

//Push back function 

// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data=val; 
//         next=NULL;
//     }
// };

// class List{
//     Node* head;
//     Node* tail;

// public:
//     List(){
//         head=NULL;
//         tail=NULL;
//     }

//     void pushfront(int val){
//         Node* newNode = new Node (val);

//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             newNode->next = head;
//             head= newNode;
//         }

//     }

//     void push_back(int val){
//         Node* newNode = new Node (val);
//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             tail->next= newNode;
//             tail=newNode;
//         }
//     }

//     void insert(int val, int pos){
//         Node* newNode = new Node(val);

//         Node* temp = head;
//         for(int i=0; i<pos; i++){
//             if(temp==NULL){
//                 cout<<"Invalid pos"<<endl;
//             }
//             temp=temp->next;
//         }

//         newNode->next=temp->next;
//         temp->next = newNode;
//     }

//     void print(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<"->";
//             temp = temp->next;
//         }cout<<"NULL";
//     }
// };

// int main(){

//     List ll;
//     for(int i=0; i<5; i++){
//         // ll.pushfront(i);
//         ll.push_back(i);
//     }

//     ll.insert(100,10);

//     ll.print();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data=val; 
//         next=NULL;
//     }

//     ~Node(){
//         if(next != NULL){
//             delete next;
//             next = NULL;
//         }
//     }
// };

// class List{
//     Node* head;
//     Node* tail;

// public:
//     List(){
//         head=NULL;
//         tail=NULL;
//     }

//     ~List(){
//         if(head != NULL){
//             delete head;
//             head=NULL;
//         }
//     }

//     void pushfront(int val){
//         Node* newNode = new Node (val);

//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             newNode->next = head;
//             head= newNode;
//         }

//     }

//     void push_back(int val){
//         Node* newNode = new Node (val);
//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             tail->next= newNode;
//             tail=newNode;
//         }
//     }

//     void insert(int val, int pos){
//         Node* newNode = new Node(val);

//         Node* temp = head;
//         for(int i=0; i<pos; i++){
//             if(temp==NULL){
//                 cout<<"Invalid pos"<<endl;
//             }
//             temp=temp->next;
//         }

//         newNode->next=temp->next;
//         temp->next = newNode;
//     }

//     void print(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<"->";
//             temp = temp->next;
//         }cout<<"NULL";
//     }
// };

// int main(){

//     List ll;
//     for(int i=0; i<5; i++){
//         // ll.pushfront(i);
//         ll.push_back(i);
//     }

//     ll.insert(100,10);

//     ll.print();

//     return 0;
// }

// #include <iostream>
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

// class List{
// public:
//     Node* head;
//     Node* tail;

//     List(){
//         head=NULL;
//         tail=NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             newNode->next= head;
//             head= newNode;
//         }
//     }

//     void popfront(){
//         if(head==NULL){
//             cout<<"LL is empty !"<<endl;
//             return ;
//         }
//         Node* temp = head;
//         head= head->next;

//         temp->next= NULL;
//         delete temp;
//     }

//     void pop_back(){
//         if(head==NULL){
//             cout<<"LL is empty"<<endl;
//             return;
//         }
//         Node* temp = head;
//         while(temp->next->next != NULL){
//             temp = temp->next;
//         }
//         temp->next=NULL;
//         delete tail;
//         tail=temp;
//     }

//     int searchitr(int key){
//         Node* temp =head;
//         int idx=0;

//         while(temp != NULL){
//             if(temp->data == key){
//                 return idx;
//             }

//             temp=temp->next;
//             idx++;

//         }
//         return -1;
//     }

//     int helper(Node* temp, int key){

//         if(temp==NULL){
//             return -1;
//         }

//         if(temp->data==key){
//             return 0;
//         }
//         int idx = helper(temp->next , key);
//         if(idx==-1){
//             return -1;
//         }

//         return idx+1;
//     }

//     int SearchRec(int key){
//         return helper(head, key);
//     }

//     void print(){
//         if(head==NULL){
//             cout<<"LL is empty"<<endl;
//             return;
//         }
//         Node* temp= head;
//         while(temp != NULL){
//             cout<<temp->data<<"->";
//             temp=temp->next;
//         }cout<<"NULL"<<endl;
//     }

//     int size(){
//         int size=0;
//         Node* temp=head;
//         while(temp!=NULL){
//             temp=temp->next;
//             size++;

//         }
//         return size;
//     }

//     void removeNth(int n){
//         Node* prev = head;

//         for(int i=0; i<(size()-n); i++){
//             prev = prev->next;
//         }
//         Node* todelete= prev->next;
//         cout<<"Going to delete"<<todelete->data<<endl;
//         prev->next = prev->next->next;

//     }

//     void reverse(){
//         Node* curr = head;
//         Node* prev = NULL;

//         while(curr!= NULL){
//             Node* next = curr->next;
//             curr->next= prev;

//             prev=curr;
//             curr=next;

//         }
//         head=prev;
//     }
// };

// int main(){

//     List ll;
//     ll.print();
//     for(int i=0; i<5;i++){
//         ll.push_front(i);
//     }

//     ll.print();
//     ll.popfront();
//     ll.print();
//     ll.pop_back();
//     ll.print();
//     cout<<ll.searchitr(2)<<endl;
//     cout<<ll.SearchRec(2)<<endl;

//     ll.reverse();
//     ll.print();

//     ll.removeNth(2);
//     ll.print();

//     return 0;
// }

//Detect cycle in a linked list


// #include <iostream>
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

// class List{
// public:
//     Node* head;
//     Node* tail;

//     List(){
//         head=NULL;
//         tail=NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             newNode->next= head;
//             head= newNode;
//         }
//     }

//     void popfront(){
//         if(head==NULL){
//             cout<<"LL is empty !"<<endl;
//             return ;
//         }
//         Node* temp = head;
//         head= head->next;

//         temp->next= NULL;
//         delete temp;
//     }

//     void pop_back(){
//         if(head==NULL){
//             cout<<"LL is empty"<<endl;
//             return;
//         }
//         Node* temp = head;
//         while(temp->next->next != NULL){
//             temp = temp->next;
//         }
//         temp->next=NULL;
//         delete tail;
//         tail=temp;
//     }

//     int searchitr(int key){
//         Node* temp =head;
//         int idx=0;

//         while(temp != NULL){
//             if(temp->data == key){
//                 return idx;
//             }

//             temp=temp->next;
//             idx++;

//         }
//         return -1;
//     }

//     int helper(Node* temp, int key){

//         if(temp==NULL){
//             return -1;
//         }

//         if(temp->data==key){
//             return 0;
//         }
//         int idx = helper(temp->next , key);
//         if(idx==-1){
//             return -1;
//         }

//         return idx+1;
//     }

//     int SearchRec(int key){
//         return helper(head, key);
//     }

//     void print(){
//         if(head==NULL){
//             cout<<"LL is empty"<<endl;
//             return;
//         }
//         Node* temp= head;
//         while(temp != NULL){
//             cout<<temp->data<<"->";
//             temp=temp->next;
//         }cout<<"NULL"<<endl;
//     }

//     int size(){
//         int size=0;
//         Node* temp=head;
//         while(temp!=NULL){
//             temp=temp->next;
//             size++;

//         }
//         return size;
//     }

//     void removeNth(int n){
//         Node* prev = head;

//         for(int i=0; i<(size()-n); i++){
//             prev = prev->next;
//         }
//         Node* todelete= prev->next;
//         cout<<"Going to delete"<<todelete->data<<endl;
//         prev->next = prev->next->next;

//     }

//     void reverse(){
//         Node* curr = head;
//         Node* prev = NULL;

//         while(curr!= NULL){
//             Node* next = curr->next;
//             curr->next= prev;

//             prev=curr;
//             curr=next;

//         }
//         head=prev;
//     }
// };

// bool isCycle(Node* head){
//     Node* slow= head;
//     Node* fast= head;
//     while(fast!=NULL && fast->next != NULL){
//         slow=  slow->next;
//         fast= fast->next->next;

//         if(slow==fast){
//             cout<<"Cycle exists"<<endl;
//             return true;
//         }
//     }
//     return false;
// }


// void removecycle(Node* head){
//     // Detect cycle
//     Node* slow= head;
//     Node* fast = head;
//     bool isCycle= false;

//     while(fast!= NULL && fast->next != NULL){
//         slow= slow->next;
//         fast= fast->next->next;

//         if(slow==fast){
//             cout<<"Cycle exists"<<endl;
//             isCycle=true;
//             break;
//         }
//     }
//     if(!isCycle){
//         cout<<"Cycle doesn't exists"<<endl;
//         return;
//     }
//     //removing cycle from the linked list
//     slow=head;
//     if(slow==fast){//special case when tail meets to head
//         while(fast->next!=slow){
//             fast=fast->next;
//         }
//         fast->next=NULL;
//     }else{
//         Node* prev= fast;
//         while(slow!=fast){
//             prev=fast;
//             slow=slow->next;
//             fast=fast->next;
//         }
//         prev->next=NULL;

        
//     }
// }

// int main(){
//     List ll;
//     ll.push_front(4);
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);

//     ll.tail->next = ll.head;

//     cout<<isCycle(ll.head);
//     removecycle(ll.head);
//     cout<<isCycle(ll.head);
 
// }


// Merge Sort in Linked List


// #include <iostream>
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

// class List{
// public:
//     Node* head;
//     Node* tail;

//     List(){
//         head=NULL;
//         tail=NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if(head==NULL){
//             head=tail=newNode;
//         }else{
//             newNode->next= head;
//             head= newNode;
//         }
//     }

//     void popfront(){
//         if(head==NULL){
//             cout<<"LL is empty !"<<endl;
//             return ;
//         }
//         Node* temp = head;
//         head= head->next;

//         temp->next= NULL;
//         delete temp;
//     }

//     void pop_back(){
//         if(head==NULL){
//             cout<<"LL is empty"<<endl;
//             return;
//         }
//         Node* temp = head;
//         while(temp->next->next != NULL){
//             temp = temp->next;
//         }
//         temp->next=NULL;
//         delete tail;
//         tail=temp;
//     }

//     int searchitr(int key){
//         Node* temp =head;
//         int idx=0;

//         while(temp != NULL){
//             if(temp->data == key){
//                 return idx;
//             }

//             temp=temp->next;
//             idx++;

//         }
//         return -1;
//     }

//     int helper(Node* temp, int key){

//         if(temp==NULL){
//             return -1;
//         }

//         if(temp->data==key){
//             return 0;
//         }
//         int idx = helper(temp->next , key);
//         if(idx==-1){
//             return -1;
//         }

//         return idx+1;
//     }

//     int SearchRec(int key){
//         return helper(head, key);
//     }

//     void print(){
//         if(head==NULL){
//             cout<<"LL is empty"<<endl;
//             return;
//         }
//         Node* temp= head;
//         while(temp != NULL){
//             cout<<temp->data<<"->";
//             temp=temp->next;
//         }cout<<"NULL"<<endl;
//     }

//     int size(){
//         int size=0;
//         Node* temp=head;
//         while(temp!=NULL){
//             temp=temp->next;
//             size++;

//         }
//         return size;
//     }

//     void removeNth(int n){
//         Node* prev = head;

//         for(int i=0; i<(size()-n); i++){
//             prev = prev->next;
//         }
//         Node* todelete= prev->next;
//         cout<<"Going to delete"<<todelete->data<<endl;
//         prev->next = prev->next->next;

//     }

//     void reverse(){
//         Node* curr = head;
//         Node* prev = NULL;

//         while(curr!= NULL){
//             Node* next = curr->next;
//             curr->next= prev;

//             prev=curr;
//             curr=next;

//         }
//         head=prev;
//     }
// };

// bool isCycle(Node* head){
//     Node* slow= head;
//     Node* fast= head;
//     while(fast!=NULL && fast->next != NULL){
//         slow=  slow->next;
//         fast= fast->next->next;

//         if(slow==fast){
//             cout<<"Cycle exists"<<endl;
//             return true;
//         }
//     }
//     return false;
// }


// void removecycle(Node* head){
//     // Detect cycle
//     Node* slow= head;
//     Node* fast = head;
//     bool isCycle= false;

//     while(fast!= NULL && fast->next != NULL){
//         slow= slow->next;
//         fast= fast->next->next;

//         if(slow==fast){
//             cout<<"Cycle exists"<<endl;
//             isCycle=true;
//             break;
//         }
//     }
//     if(!isCycle){
//         cout<<"Cycle doesn't exists"<<endl;
//         return;
//     }
//     //removing cycle from the linked list
//     slow=head;
//     if(slow==fast){//special case when tail meets to head
//         while(fast->next!=slow){
//             fast=fast->next;
//         }
//         fast->next=NULL;
//     }else{
//         Node* prev= fast;
//         while(slow!=fast){
//             prev=fast;
//             slow=slow->next;
//             fast=fast->next;
//         }
//         prev->next=NULL;

        
//     }
// }

// Node* splitAtMid(Node* head){
//     Node* slow= head;
//     Node* fast= head;
//     Node* prev = NULL;

//     while(fast != NULL && fast->next != NULL){
//         prev= slow;
//         slow= slow->next;
//         fast= fast->next->next;
//     }

//     if(prev != NULL){
//         prev->next = NULL; // split at middle
//     }

//     return slow;// right head;
// }

// Node* merge(Node* left , Node* right){
//     List ans;
//     Node* i= left;
//     Node* j= right;

//     while(i != NULL && j != NULL){
//         if(i->data <= j->data){
//             ans.push_front(i->data);
//             i = i->next;
//         }else{
//             ans.push_front(j->data);
//             j = j->next;
//         }
//     }

//     while(i != NULL){
//         ans.push_front(i->data);
//         i = i->next;
//     }

//     while(j != NULL){
//         ans.push_front(j->data);
//         j = j->next;
//     }

//     return ans.head;

// }

// Node* mergeSort(Node* head){

//     if(head==NULL || head->next == NULL){
//         return head;
//     }

//     Node* rightHead= splitAtMid(head);
//     Node* left = mergeSort(head);
//     Node* right = mergeSort(rightHead);

//     return merge(left, right);
// }

// int main(){
//     List ll;
//     ll.push_front(4);
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);

//     ll.head = mergeSort(ll.head);
//     ll.print();
 
// }