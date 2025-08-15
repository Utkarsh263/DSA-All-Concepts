// Recursion

// #include <iostream>
// using namespace std;

// void func(){
//     cout<<"Recursion"<<endl;
//     func();
// }

// int main(){
//     func();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     cout<<fact(n);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void printInc(int n){
//     if(n==0){
//         return;
//     }
//     cout<<"Print "<<n<<endl;
//     printInc(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     printInc(n);
// }

// #include <iostream>
// using namespace std;

// void printInc(int n){
//     if(n==0){
//         return;
//     }
    
//     printInc(n-1);
//     cout<<"Print "<<n<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     printInc(n);
// }



// #include <iostream>
// using namespace std;

// int sumofNnumber(int n){

//     if(n==0){
//         return 0;
//     }

//     return n+sumofNnumber(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     cout<<endl;
//     cout<<sumofNnumber(n);
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
   

//     return fibonacci(n-2)+fibonacci(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<fibonacci(n);

// }



// Check if array is sorted
// #include <iostream>
// using namespace std;

// bool isSorted(int arr[], int n, int i){
//     if(arr[i]>arr[i+1]){
//         return false;
//     }

//     if(i==n-1){
//         return true;
//     }

//     isSorted(arr,n-1, i+1);
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int arr1[5]={1,2,4,3,5};
//     int n=5;
//     int i=0;

//     cout<<isSorted(arr, n,i)<<endl;
//     cout<<isSorted(arr1, n,i)<<endl;
//     return 0;
// }

// Check first Occurence

// #include <iostream>
// #include <vector>
// using namespace std;

// int firstOccurence(vector<int>arr, int i,int target){

//     if(arr[i]==target){
//         return i;
//     }
//     if(i==arr.size()-1){
//         return -1;
//     }

//     return firstOccurence(arr, i+1, target);
// }

// int main(){

//     vector<int>vec={1,2,3,3,4,5};
//     int n=vec.size();
//     int i=0;
//     int target;
//     cout<<"Enter the first occurence target digit ";
//     cin>>target;

//     cout<<firstOccurence(vec,i+1,target);

// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int lastOccurence(vector<int>arr, int i,int target){

//     if(arr[i]==target){
//         return i;
//     }
//     if(i==0){
//         return -1;
//     }

//     return lastOccurence(arr, i-1, target);
// }

// int main(){

//     vector<int>vec={1,2,3,3,4,5,5};
//     int n=vec.size();
//     int i=n-1;
//     int target;
//     cout<<"Enter the last occurence target digit ";
//     cin>>target;

//     cout<<lastOccurence(vec,i,target);

// }


// Tiling Problem 

// #include <iostream>
// using namespace std;

// int TilingProblem(int n){
//     //if n==0 is a solution way of not to place a single tile
//     if(n==0||n==1){
//         return 1;
//     }

//     // Verical placement 
//     int vertical= TilingProblem(n-1);

//     // Horizontal Placement 
//     int horizontal= TilingProblem(n-2);

//     int ans= horizontal+vertical;
//     return ans;
    
// }

// int main(){

//     int n;
    
//     cout<<"Enter the dimension n : ";
//     cin>>n;
//     cout<<endl;
//     cout<<TilingProblem(n);
// }

// Remove Duplicated from the string 

// #include <iostream>
// #include <string>
// using namespace std;

// void removeDuplicates(string str, string ans, int i, int map[26]){

//     char ch= str[i];
//     int mapIdx =  (int)(ch-'a');    
//     if(i==str.size()){
//         cout<<"ans = "<<ans;
//         return ;
//     }

//     if(map[mapIdx]){
//         removeDuplicates(str, ans, i+1,map);
//     }else{
//         map[mapIdx]=true;
//         removeDuplicates(str, ans+str[i], i+1, map);
//     }


// }

// int main(){

//     string str= "aappnacollege";
//     string ans="";
//     int map[26]={false};
//     int i=0;

//     removeDuplicates(str, ans, i,map);
// }


//Friend pairing problem 

// #include <iostream>
// #include <string>
// using namespace std;

// int friendPairing(int n){
//     if(n==1 || n==2){
//         return n;
//     }

//     // Single  
//     int ans1 = friendPairing(n-1);

//     // In Pair
//     int ans2= friendPairing(n-2)*(n-1);

//     int totalways= ans1+ans2;

//     return totalways;
// }

// int main(){

//     cout<<friendPairing(5);
// }

// Binary String Prolem 

#include <iostream>
#include <string>
using namespace std;

void binaryString(int n, int LastPlace , string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }

    if(LastPlace != 1){
        binaryString(n-1, 0,ans+'0');
        binaryString(n-1, 1,ans+'1');
    }else{
        binaryString(n-1, 0,ans+'0'); 
    }
}

int main(){

    string ans="";
    binaryString(3,0,ans);
    return 0;
}





