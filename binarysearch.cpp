#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid = start + (end - start) / 2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int key=3;

    int index=BinarySearch(arr,n,key);

    cout<<index<<endl;
    return 0;
}


