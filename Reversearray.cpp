// // / using extra space
 


// #include <iostream>
// using namespace std;

// void printarr(int arr[], int n){
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// int main(){

//     int arr[5] = {1, 2, 3, 4, 5};
//     int n= sizeof(arr)/sizeof(int);

//     int copyArr[n];

//     for (int i=0; i<n;i++){
//         int j= n-i-1;
//         copyArr[i]= arr[j];
//     }

//     for(int i=0; i<n;i++){
//         arr[i]= copyArr[i];
//     }

//     printarr(arr,n);

//     return 0;

// }



// using not extra space

#include <iostream>
using namespace std;

void printarr(int arr[], int n){
    for (int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    int i=0;
    int j=n-1;
    int temp;

    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    printarr(arr,n);
}
 