//Bit Manipulation

// #include <iostream>
// using namespace std;

// int main(){
//     //Bitwise Operator

//     cout<<(3 & 5)<<endl;
//     cout<<(3 | 5)<<endl;
//     cout<<(3 ^ 5)<<endl;
// }

//Binary Not Operator

// #include <iostream>
// using namespace std;

// int main(){

//     cout<<(~0);
//     return 0;
// }


// Binary Shift operator

// #include <iostream>
// using namespace std;

// int main(){

//     cout<<(7<<2)<<endl;  // Left Shift
//     cout<<(7>>2)<<endl;  //Right Shift

// }

// #include <iostream>
// using namespace std;

// int main(){

//     cout<<(~4)<<endl;
//     cout<<(8>>1)<<endl;
// }

// Check if odd is even or not

// #include <iostream>
// using namespace std;

// void OddorEven(int num){
//     if(!(num & 1)){
//         cout<<"even number";
//     }else{
//         cout<<"odd number";
//     }
// }

// int main(){

//     int n;
//     cin>>n;

//     OddorEven(n);

//     return 0;
// }

//Get ith bit

// #include <iostream>
// using namespace std;

// int getIthbit(int num, int i){
//     int bitMask = 1 << i;

//     if(!(num & bitMask)){
//         cout<<"Zero";
//     }else{
//         cout<<"One";
//     }
// }


// int main(){

//     int num,i;
//     cin>>num;
//     cout<<"Enter position of bit"<<endl;
//     cin>>i;

//     getIthbit(num, i);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int setIthbit(int num,int i){
//     int bitMask= 1<<i;

//     return (num | bitMask);
// }

// int main(){
//     cout<<setIthbit(6,3)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int clearIthbit(int num , int i){
//     int bitMask = ~(1<<i);

//     return (num & bitMask);
// }

// int main(){

//     cout<< clearIthbit(7,2)<<endl;
// }

//Check  whether number is powwr of 2 or not

// #include <iostream>
// using namespace std;

// bool isPowerof2(int num){

//     if(!(num & num-1)){
//             return true;
//     }else{
//         return false;
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter the number : "<<endl;;
//     cin>>num;
//     cout<< isPowerof2(num)<<endl;


// }



// Update ith bit

// #include <iostream>
// using namespace std;

// int updateithbit(int num, int i, int val){
//     num= num & ~(1 << i); //clear ith bit

//     num = num | (val << i);

//     return num;

// }

// int main(){

//     cout << updateithbit( 7,2,0);
//     return 0;
// }

// Clear last ith bits

// #include <iostream>
// using namespace std;

// int clearLastibits(int num, int i){

//     int bitMask = (~0 )<<i;

//     return (num & bitMask);
// }

// int main(){

//     cout<< clearLastibits(15, 2);
// }

// #include <iostream>
// using namespace std;

// int countSetbits(int num){
//     int count=0;

//     while(num>0){
//         int lastDigit = num & 1;
//         count = count+ lastDigit;

//         num = num >> 1;
//     }
//     return count;
// }

// int main(){

//     cout<<countSetbits(7)<<endl;
//     return 0;
// }



// Fast Exponentiation

#include <iostream>
using namespace std;

void FastExpo(int x, int n){
    int ans=1;

    while(n>0){

        int lastbit = n & 1;

        if(lastbit){
            ans= ans*x;

        }

        x=x*x;
        n= n>>1;
       

    }
    cout<< ans<<endl;
}

int main(){

    FastExpo(3,8);  
    return 0; 
     
}

