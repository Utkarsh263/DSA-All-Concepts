//
#include <iostream>
using namespace std;

int WaterTrap(int height[], int n){
    int leftmax[20000];
    leftmax[0]= height[0];
    for (int i=1; i<n; i++){
        leftmax[i]= max(leftmax[i-1], height[i-1]);
        cout<<leftmax[i]<<" ";
    }
    cout<<endl;

    int rightmax[20000];
    rightmax[n-1]=height[n-1];
    for(int i=n-2; i>=0;i--){
        rightmax[i]=max(rightmax[i+1], height[i+1]);
        cout<<rightmax[i]<<" ";
    }

    cout<<endl;

    int watertrapped=0;
    for(int i=0;i<n;i++){
        int Currwater= min(leftmax[i], rightmax[i])- height[i];
        if(Currwater>0){
            watertrapped += Currwater;
        }
    }
    
    return watertrapped;

}

int main(){
    int height[]={4,2,0,3,6,2,5};
    int n = sizeof(height)/sizeof(int);


    cout<<WaterTrap(height, n);

}