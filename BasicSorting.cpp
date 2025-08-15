// Bubble Sort

// #include <iostream>
// using namespace std;

// void BubbleSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// void printArr(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// int main(){

//     int arr[5]={5,4,3,2,1};
//     int n=sizeof(arr)/sizeof(int);

//     cout<<"Array without Sorting"<<endl;

//     printArr(arr,n);

//     cout<<endl;

//     BubbleSort(arr,n);

//     cout<<"Array after Sorting"<<endl;

//     printArr(arr,n);

// }


// Selection Sort

// #include <iostream>
// using namespace std;

// void SelectionSort(int arr[], int n){

//     for(int i=0;i<n-1;i++){
//         int minIdx=i;
//         for(int j=i+1; j<n;j++){
//             if(arr[j]<arr[minIdx]){
//                 minIdx=j;
//             }

//             swap(arr[i], arr[minIdx]);
//         }
//     }
// }

// void PrintArr(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){

//     int arr[]={5,4,3,2,1};
//     int n= sizeof(arr)/sizeof(int);

//     cout<<"Array without Sorting"<<endl;

//     PrintArr(arr,n);

//     cout<<endl;

//     SelectionSort(arr,n);

//     cout<<"Array after Sorting"<<endl;

//     PrintArr(arr,n);



// }

// Insertion Sort 

// #include <iostream>
// using namespace  std;

// void InsertionSort(int arr[], int n){
    
//     for(int i=0; i<n;i++){
//         int curr=arr[i];
//         int  prev=i-1;

//         while(prev>=0 && arr[prev]>curr){
//             swap(arr[prev],arr[prev+1]);
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
// }

// void printArr(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){

//     int arr[7]={12,23,43,1,2,8,0};
//     int n= sizeof(arr)/sizeof(int);

//     cout<<"Array without Sorting"<<endl;
//     printArr(arr,n);
//     InsertionSort(arr,n);
//     cout<<"Array after Sorting"<<endl;
//     printArr(arr,n);

// }

//Count Sort

#include <iostream>
using namespace std;

void countSort(int arr[], int n){

    int freq[10000]={0};
    int minVal=INT16_MAX;
    int maxVal=INT16_MIN;

    for(int i=0;i<n;i++){
        minVal=min(arr[i],minVal);
        maxVal= max(arr[i], maxVal);
    }

    // 1st step

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    //2nd step

    for(int i=minVal, j=0; i<=maxVal;i++){
        while(freq[i]>0){
            arr[j]=i;
            j++;
            freq[i]--;
        }
    }
}

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5]={12,3,1,34,56};
    int n= sizeof(arr)/sizeof(int);

    cout<<"Array without Sorting"<<endl;
    printArr(arr,n);
    countSort(arr, n);
    cout<<"Array after Sorting"<<endl;
    
    printArr(arr,n);

    return 0;
}
