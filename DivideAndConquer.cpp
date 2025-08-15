// Divide And Conquer

// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(int arr[], int si, int mid, int ei){
//     vector<int>temp; 
//     int i=si; 
//     int j=mid+1;

//     while(i<=mid && j <= ei){
//         if(arr[i]<=arr[j]){
//             temp.push_back(arr[i++]);  
//         }else{
//             temp.push_back(arr[j++]);
//         }
//     }

//     while(i<=mid){
//         temp.push_back(arr[i++]);
//     }

//     while(j<=ei){
//         temp.push_back(arr[j++]);
//     }

//     for(int idx=si, x=0; idx<=ei;idx++){
//         arr[idx]= temp[x++];
//     }
// }

// void mergeSort(int arr[], int si , int ei){

//     if(si>=ei){
//         return ;
//     }

//     int mid= (si+ei)/2;
//     mergeSort(arr, si , mid);
//     mergeSort(arr, mid+1, ei);

//     merge(arr, si, mid, ei);
// }

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){

//     int arr[6]={6,5,5,7,2,4};
//     int n=6;

//     mergeSort(arr, 0, n-1);
//     printArray(arr, 6);
// }



// Quick Sort

// #include <iostream> 
// using namespace std;

// int partition(int arr[], int start, int end) {
//     int pivot = arr[start];   // pivot is the first element
//     int count = 0;

//     // Count how many elements are less than or equal to pivot
//     for (int i = start + 1; i <= end; i++) {
//         if (arr[i] <= pivot) {
//             count++;
//         }
//     }

//     // Place pivot at its correct position
//     int pivotIndex = start + count;
//     swap(arr[pivotIndex], arr[start]);

//     // Rearranging elements around the pivot
//     int i = start, j = end;
//     while (i < pivotIndex && j > pivotIndex) {
//         while (arr[i] <= pivot) i++;
//         while (arr[j] > pivot) j--;
//         if (i < pivotIndex && j > pivotIndex) {
//             swap(arr[i++], arr[j--]);
//         }
//     }

//     return pivotIndex;
// }

// void quickSort(int arr[], int start, int end) {
//     if (start >= end)
//         return;

//     int p = partition(arr, start, end);

//     quickSort(arr, start, p - 1);
//     quickSort(arr, p + 1, end);
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[] = {6, 3, 8, 5, 2, 7, 4, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     quickSort(arr, 0, n - 1);
//     printArray(arr, n);

//     return 0;
// }

// O(n**2) complexity as worst as pivot chosen be the smallest and largest element of an array


//Search in a rotated sorted array 

#include <iostream>
using namespace std;

int search(int arr[], int si, int ei, int target){

    if(si > ei){
        return -1;
    }


    int mid= (si+ei)/2;
    if(arr[mid]==target){
        return mid;
    }


    if(arr[si] <= arr[mid]){
        if(arr[si] <= target && target <= arr[mid]){
            return search(arr, si, mid-1,target);
        }else{
            return search(arr, mid+1, ei, target);
        }
    }else{

        if(arr[mid] <= target && target <= arr[ei]){
            return search(arr, mid+1,ei, target);
        }else{
            return search(arr, si, mid-1, target);
        }
    }

}

int main(){
    int arr[7]={4,5,6,7,0,1,2};
    int n=7;

    cout<<search(arr, 0, n-1,0)<<endl;
    return 0;
}
