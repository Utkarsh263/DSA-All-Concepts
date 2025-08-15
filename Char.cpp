//

// #include <iostream>
// using namespace std;

// int main(){
//     char ch='a';
//     int pos= ch - 'a';
//     cout<<(int)ch<<endl;
//     cout<<pos;


// }


// Character Arrays

// #include <iostream>
// using namespace std;

// int main(){
//     char arr[5]={'a','b','c','d','\0'};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<arr;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     char work[]="code";
//     cout<<work<<endl;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     // char word[30];
//     // cin>>word;  // ignore whitespaces

//     // cout<<"your word was"<<" "<<word<<endl;

//     char sentence[30];
//     cin.getline(sentence, 30);

//     cout<<"your word was"<<" "<<sentence<<endl;


// }

//Convert to Uppercase

// #include <iostream>
// #include <cstring>
// using namespace std;

// void ToUpper(char word[], int n){
    

//     for(int i=0; i<n;i++){
//         char ch= word[i];
//         if(ch>='A' && ch<='Z'){
//             continue;
//         }else{
//             word[i]= ch-'a'+'A';
//         }
//     }
// }

// void ToLower(char word[], int n){
    
//     for(int i=0; i<n;i++){
//         char ch= word[i];
//         if(ch>='a' && ch<='z'){
//             continue;
//         }else{
//             word[i]=ch-'A'+'a';
//         }
//     }
// }

// void print(char word[], int n){
//     for(int i=0;i<n;i++){
//         cout<<word[i];
//     }
// }

// int main(){
//     char word[]="ApPle";

//     ToUpper(word, strlen(word));
//     ToLower(word, strlen(word));
//     print(word, strlen(word));
//     return 0;
// }


// Reverse the character array


// #include <iostream>
// #include <cstring>
// using namespace std;

// void ToReverse(char word[], int n){
//     int start=0;
//     int end=n-1;

//     while(start<=end){
//         swap(word[start++], word[end--]);
        
//     }

// }

// int main(){

//     char word[]="Utkarsh";
//     int n= strlen(word);
//     ToReverse(word, n);
//     cout<<word<<endl;

//     return 0;
// }


// Valid Palindriome

// #include <iostream>
// #include <cstring>
// using namespace std;

// bool isPalindrome(char word[], int n){
//     int start=0;
//     int end=n-1;

//     while(start<=end){
//         if(word[start++]!=word[end--]){
//             return false;
//         }
//         return true;
//     }
// }

// int main(){

//     char word[]="racecar";
//     int n=strlen(word);

//     cout<<isPalindrome(word,n);
// }


// Valid ANAGRAM

#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2){
    if(str1.length()!= str2.length()){
        return false;
    }

    int count[26]={0};
    for(int i=0; i<str1.length();i++){
        count[str1[i]-'a']++;
    }

    for(int i=0; i<str2.length();i++ ){
        int idx= str2[i]-'a';

        if(count[idx]==0){
            return false;
        }else{
            count[idx]--;
        }
    }
    return true;
}

int main(){
    string str1= "anagram";
    string str2="nagaram";

    cout<<isAnagram(str1, str2);

    return 0;
}
 