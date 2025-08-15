// Dynamic array allocation

// #include <iostream>
// using namespace std;

// int main(){
//     int size;
//     cin>>size;

//     int *arr= new int[size];
//     int x=0;
//     for(int i=0;i<size;i++){
//         arr[i]=x++;
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }


//Memory Leak

// #include <iostream>
// using namespace std;

// int* func(){
//     int *ptr=new int;
//     *ptr=100;
//     cout<<"ptr points to"<< *ptr<<endl;

//     return ptr;
// }

// int main(){
//     int *x= func();
//     cout<<*x<<endl;
//     return 0;
// }


// 2D Dynamic Array

// #include <iostream>
// using namespace std;


// int main(){
//     int rows, cols;
//     cout<<"enter rows"<<endl;
//     cin>>rows;
//     cout<<"enter cols"<<endl;
//     cin>>cols;

//     int** matrix= new int*[rows];

//     for(int i=0;i<rows;i++){
//         matrix[i]= new int[cols];
//     }
    

//     int x=1;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             matrix[i][j]=x++;
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// vector Implementation in memory

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int>vec;
//     vec={1,2,3,4};
//     cout<<"Size is "<<vec.size()<<endl;
//     cout<<"Capacity is "<<vec.capacity()<<endl;

//     vec.push_back(5);
//     cout<<"Size is "<<vec.size()<<endl;
//     cout<<"Capacity is "<<vec.capacity()<<endl;

// }

//Pair Sum 

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSum(vector<int> arr, int target){
//     int start=0, end= arr.size()-1;
//     int currSum=0;
//     vector<int> ans;

//     while(start<end){
//         currSum= arr[start]+arr[end];
//         if(currSum==target){
//             ans.push_back(start);
//             ans.push_back(end);
//             return ans;
//         }else if(currSum > target){
//             end--;
//         }else{
//             start++;
//         }
//     }
//     return ans;
// }


// int main(){

//     vector<int> vec={2,7,11,15};
//     int target=9;
//     vector<int>ans=pairSum(vec, target);
//     cout<<ans[0]<<" "<<ans[1]<<endl;
//     return 0;

// }

//2D Vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> matrix={{1},{4,5},{7,8,9}};
    for(int i=0; i<matrix.size();i++){
        for(int j=0; j<matrix[i].size(); j++ ){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}
