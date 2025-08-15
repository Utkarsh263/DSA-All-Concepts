// Greedy Algorithms

// Activity Selection Problem 

// #include <iostream>
// #include <vector>
// using namespace std;

// int ActivitySelection(int start[], int end[], int n) {
//     int count = 1;         // Always select the first activity
//     int lastEnd = end[0];  // End time of last selected activity

//     for (int i = 1; i < n; i++) {
//         if (start[i] >= lastEnd) {
//             count++;
//             lastEnd = end[i];
//         } 
//     }

//     return count;
// }


// int main(){
//     int start[5]={10,12, 20, 25, 30};
//     int end[5]={20, 25, 30, 35, 40};

//     int n=5;
//     cout<<ActivitySelection(start, end, n);
//     return 0;
// }

// Maximum number of Activities Selected

// #include <iostream>
// #include <vector>
// using namespace std;

// int MaxActivitySelection(vector<int> start, vector<int>end){
//     int count=1;
//     int n=start.size();
//     int lastend=end[0];

//     for(int i=0; i<n; i++){
//         if(lastend<start[i+1]){
//             count++;
//             lastend= end[i];
//         }
//     }return count;

// }


// int main(){
//     vector<int> start={1,3,0,5,8,5};
//     vector<int> end={2,4,6,7,9,9};

//     cout<<MaxActivitySelection(start, end);

//     return 0;
// }


// Pairs in C++

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){

//     vector<int> start={0,1,2};
//     vector<int> end={9,2,4};

//     vector<pair<int, int>>act(3, make_pair(0,0));
//     act[0]=make_pair(0,9);
//     act[1]=make_pair(1,2);
//     act[2]=make_pair(2,4);

//     for(int i=0; i<act.size(); i++){
//         cout<< act[i].first << ","<<act[i].second<<endl;
//     }
    
    
//     sort(act.begin(), act.end(), compare);
//     return 0; 
// }


// Fractional Knapsack 

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // Comparator to sort pairs in descending order of value-to-weight ratio
// bool compare(pair<double, int> p1, pair<double, int> p2) {
//     return p1.first > p2.first;
// }

// int FractionalKnapsack(vector<int> val, vector<int> wt, int W) {
//     int n = val.size();
//     vector<pair<double, int>> ratio(n);  // {value/weight, index}

//     // Step 1: Compute value-to-weight ratios
//     for (int i = 0; i < n; i++) {
//         double r = val[i] / (double)wt[i];
//         ratio[i] = {r, i};
//     }

//     // Step 2: Sort by ratio descending
//     sort(ratio.begin(), ratio.end(), compare);

//     // Step 3: Pick items greedily
//     double totalValue = 0.0;
//     for (int i = 0; i < n; i++) {
//         int idx = ratio[i].second;
//         if (wt[idx] <= W) {
//             // Take the whole item
//             totalValue += val[idx];
//             W -= wt[idx];
//         } else {
//             // Take fractional part
//             totalValue += ratio[i].first * W;
//             break;
//         }
//     }

//     return (int)totalValue;  // Or return double if exact value needed
// }

// int main() {
//     vector<int> val = {60, 100, 120};
//     vector<int> wt  = {10, 20, 30};
//     int W = 50;

//     cout << FractionalKnapsack(val, wt, W) << endl;
//     return 0;
// }

// Min Absolute Diffreence pairs 


// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int MinAbsDiff(vector<int> A , vector<int> B){
//     sort(A.begin(), A.end());
//     sort(B.begin(), B.end());

//     int n= A.size();
//     int ans = 0;

//     for(int i=0; i<n; i++){
//         ans= ans+(abs(A[i]-B[i]));
//     }
//     return ans;
// }

// int main(){

//     vector<int> A ={4,1,8,7};
//     vector<int> B={2,3,6,5};

//     cout<<MinAbsDiff(A,B)<<endl;
//     return 0;
// }



// Maximum Length of Pairs

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // Comparator to sort pairs by their second element
// bool compare(pair<int, int> a, pair<int, int> b) {
//     return a.second < b.second;
// }

// int maxChainLength(vector<pair<int, int>> &pairs) {
//     // Sort based on the second element
//     sort(pairs.begin(), pairs.end(), compare);

//     int count = 1;  // At least one pair is always part of chain
//     int lastEnd = pairs[0].second;

//     for (int i = 1; i < pairs.size(); i++) {
//         if (pairs[i].first > lastEnd) {
//             count++;
//             lastEnd = pairs[i].second;
//         }
//     }

//     return count;
// }

// int main() {
//     vector<pair<int, int>> pairs = {
//         {5, 24},
//         {39, 60},
//         {5, 28},
//         {27, 40},
//         {50, 90}
//     };

//     cout << "Max length of chain: " << maxChainLength(pairs) << endl;
//     return 0;
// }

// Indian Coins

// #include <iostream>
// #include <vector>
// using namespace std;

// int IndianCoin(vector<int>den, int Total){
//     int n= den.size();
//     int count=0;

//     for(int i=n-1; i>=0 && Total>0; i--){
//         while(den[i]<=Total){
//             cout<<"Added "<<den[i]<<endl;
//             count++;
//             Total=Total-den[i];
//         }
//     }
//     return count;
// }

// int main(){
//     vector<int> den={1,2,5,10,20,50,100,500,2000};
//     int Total =  1590;

//     cout<<IndianCoin(den, Total);
// }








