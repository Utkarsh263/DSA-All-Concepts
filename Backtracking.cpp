// Backtracking

// #include <iostream>
// using namespace std;

// void printArr(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// void changeArr(int arr[], int n , int i){

//     if(i==n){
//         printArr(arr, n);
//         return ;
//     }

//     arr[i]=i+1;
//     changeArr(arr, n, i+1);
//     arr[i] -= 2;
// }

// int main(){

//     int arr[5]={0};
//     int n=5;

//     changeArr(arr, n , 0);
//     printArr(arr,n);
//     return 0;
// }

// Find Subsets of the string 

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// void printSubset(string str, string ans){

//     if(str.size()==0){
//         cout<< ans<<endl;
//         return;
//     }

//     char ch = str[0];
//     //Yes Choice 
//     printSubset(str.substr(1, str.size()-1), ans+ch);
//     //No choice 
//     printSubset(str.substr(1, str.size()-1), ans);
// }


// int main(){
//     string str="abc";
//     string ans="";
//     printSubset(str, ans);
//     return 0;
// }


// Find Permutations of the String 


// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// void permutations(string str, string ans){

//     int n= str.size();

//     if(n==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     for(int i=0; i<str.size();i++){
//         char ch=str[i];
//         string nextStr=str.substr(0,i)+str.substr(i+1, n-i-1);
//         permutations(nextStr, ans+ch);
         

//     }
// }

// int main(){

//     string str="abc";
//     string ans="";
//     permutations(str, ans);
//     return 0;
// }


// N Queens

// #include <iostream>
// #include <vector>
// using namespace std;

// void printBoard(const vector<vector<char>>& board) {
//     int n = board.size();
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "-------------------------------\n";
// }

// bool isSafe(const vector<vector<char>>& board, int row, int col) {
//     int n = board.size();

//     // Check column
//     for (int i = 0; i < row; i++) {
//         if (board[i][col] == 'Q')
//             return false;
//     }

//     // Check upper-left diagonal
//     for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
//         if (board[i][j] == 'Q')
//             return false;
//     }

//     // Check upper-right diagonal
//     for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
//         if (board[i][j] == 'Q')
//             return false;
//     }

//     return true;
// }

// void NQueens(vector<vector<char>>& board, int row) {
//     int n = board.size();

//     if (row == n) {
//         printBoard(board);
//         return;
//     }

//     for (int col = 0; col < n; col++) {
//         if (isSafe(board, row, col)) {
//             board[row][col] = 'Q';
//             NQueens(board, row + 1);
//             board[row][col] = '.'; // Backtrack
//         }
//     }
// }

// int main() {
//     int n = 4;
//     vector<vector<char>> board(n, vector<char>(n, '.'));

//     NQueens(board, 0);
//     return 0;
// }



//Grid Ways

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int gridWays(int r, int c , int n, int m, string ans){
//     if(r==n-1 && c==m-1){
//         cout<<ans<<endl;
//         return 1;
//     }

//     if(r >= n || c>= m){
//         return 0;
//     }

//     //right turn 
//     int val1 = gridWays(r, c+1, n, m, ans+'R');
//     //down turn 
//     int val2 = gridWays(r+1, c,n, m, ans+'D');

//     return val1+val2;
// }

// int main(){

//     int n=16;
//     int m=9;

//     string ans="";

//     cout<<gridWays(0,0,n,m, ans);
// }


#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printSudoku(int sudoku[][9]){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int sudoku[9][9], int row, int col, int digit){
    //vertical 
    for(int i=0; i<=8; i++){
        if(sudoku[i][col]==digit){
            return false;
        }
    }

    //horizontal 
    for(int j=0; j<=8; j++){
        if(sudoku[row][j]==digit){
            return false;
        }
    }

    int startRow= (row/3)*3;
    int startCol= (col/3)*3;

    for(int i=startRow; i<=startRow+2; i++){
        for(int j=startCol; j<=startCol+2; j++){
            if(sudoku[i][j]==digit){
                return false;
            }
        }
    }

    return true;



}

bool sudokuSolver(int sudoku[9][9], int row, int col){
    if(row==9){
        printSudoku(sudoku);
        return true;
    }
    int nextRow = row; 
    int nextCol = col+1;

    if(col+1==9){
        nextRow=row+1;
        nextCol=0;
    }
    if(sudoku[row][col]!= 0){
        return sudokuSolver(sudoku, nextRow,nextCol);
    }

    for(int digit=1;digit<=9; digit++){
        if(isSafe(sudoku, row, col, digit)){
            sudoku[row][col]=digit;
            if(sudokuSolver(sudoku, nextRow,nextCol)){
                return true;
            }
            sudoku[row][col]=0;
        }
    }

    return false;

}

int main() {
    int sudoku[9][9] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {4, 9, 0, 1, 5, 7, 0, 0, 2},
        {0, 3, 0, 0, 0, 0, 0, 0, 0},
        {1, 8, 5, 6, 2, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 6, 0, 0},
        {9, 0, 0, 0, 7, 0, 0, 0, 0},
        {0, 0, 9, 7, 0, 6, 0, 0, 4},
        {0, 0, 0, 0, 0, 0, 0, 5, 7},
        {8, 2, 7, 0, 0, 9, 1, 3, 0}
    };

    sudokuSolver(sudoku, 0, 0);
    return 0;
}
