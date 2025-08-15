// #include <iostream>
// using namespace std;

// void printSubarray(int arr[], int n){
//     for(int start=0; start<n;start++){
//         for(int end=start; end<n; end++){
//             cout << "[";
//             for(int i=start; i<=end; i++){
//                 cout << arr[i];
//                 if(i < end) cout << ", ";
//             }
//             cout << "]" << endl;
//         }
//     }
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n= sizeof(arr)/sizeof(int);

//     printSubarray(arr,n);
// }


// #include <iostream>
// using namespace std;

// void MaxSubarray(int arr[],int n){
//     int MaxSum= INT16_MIN;

//     for(int start=0; start<n; start++){
//         for(int end=start;end<n; end++){
//             int CurrSum=0;
//             for(int i=start; i<end;i++){
//                 CurrSum += arr[i];
//             }
//             cout<<CurrSum<<" ";
//             MaxSum=max(MaxSum,CurrSum);
//         }
//         cout<<endl;
//     }
//     cout<<MaxSum<<endl;
// }


// int main(){
//     int arr[5]={1,-4,23,-3,12};
//     int n= sizeof(arr)/sizeof(int);


//     MaxSubarray(arr,n);
// }




// #include <iostream>
// using namespace std;

// int MaxSubarraySum(int arr[], int n){
//     int MaxSum=INT16_MIN;
//     for(int start=0; start<n; start++){
//         int CurrSum=0;
//         for(int end=start; end<n;end++){
//             CurrSum += arr[end];
//             MaxSum= max(CurrSum, MaxSum);
//         }
//     }
//     return MaxSum;
// }

// int main(){
//     int arr[5]={1,-4,23,-3,12};
//     int n= sizeof(arr)/sizeof(int);


//    cout<< MaxSubarraySum(arr,n);
// }


// Kadane Algorithm


#include <iostream>
using namespace std;

int KadaneSum(int arr[], int n){
    int MaxSum=INT16_MIN;
    int CurrSum=0;
    for(int i=0; i<n;i++){
        CurrSum += arr[i];
        MaxSum = max(MaxSum, CurrSum);

        if(CurrSum<0){
            CurrSum=0;
        }
    }

    return MaxSum;
}


int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);

    cout<<KadaneSum(arr, n);
}
