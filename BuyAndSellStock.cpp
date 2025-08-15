// By Array

#include <iostream>
using namespace std;


int MaxProfit(int prices[], int n){

    int BestBuy[10000];
    BestBuy[0]=INT8_MAX;

    for(int i=1;i<n; i++){
        BestBuy[i] = min(BestBuy[i-1], prices[i-1]);
        //cout<<BestBuy[i]<<" ";
    }
    int MaxProfit=0;
    for(int i=0; i<n;i++){
        int CurrProfit= prices[i]-BestBuy[i];
        MaxProfit= max(MaxProfit,CurrProfit);
    }

    return MaxProfit;

}



int main(){
    int prices[6]={7,1,5,3,6,4};
    int n= sizeof(prices)/sizeof(int);

    cout<<MaxProfit(prices, n);
}