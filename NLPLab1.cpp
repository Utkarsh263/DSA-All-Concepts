// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// void tokens(string input) {
//     vector<string> str;
//     string token = "";


//     for (int i = 0; i < input.length(); i++) {
//         if (input[i] != ' ') {
//             token = token + input[i];
//         } else {
//             if (!token.empty()) {
//                 str.push_back(token);
//                 token.clear();
//             }
//         }
//     }

//     if (!token.empty()) {
//         str.push_back(token);
//     }


//     cout << "\nTokens:\n";
//     for (int i = 0; i < str.size(); i++) {
//         cout << str[i] << endl;
//     }
//     cout << endl;


//     cout << "Token Frequencies:\n";
//     vector<bool> visited(str.size(), false);  

//     for (int i = 0; i < str.size(); i++) {
//         if (visited[i])
//             continue;

//         int count = 1;
//         for (int j = i + 1; j < str.size(); j++) {
//             if (str[i] == str[j]) {
//                 count++;
//                 visited[j] = true;
//             }
//         }
//         cout << str[i] << ":" << count << endl;
//     }
// }

// int main() {
//     string input;
//     cout << "Enter a user input to tokenize: ";
//     getline(cin, input);

//     tokens(input);

//     return 0;
// }













#include <iostream>
#include <vector>
#include <string>
using namespace std;

void tokens(string input) {
    vector<string> str;
    string token = "";

    
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ') {
            token = token + input[i];
        } else {
            if (!token.empty()) {
                if (token != "a" && token != "an" && token != "the") {
                    str.push_back(token);
                }
                token.clear();
            }
        }
    }

    
    if (!token.empty()) {
        if (token != "a" && token != "A" && token != "an" && token != "An" && token != "the" && token != "The") {
            str.push_back(token);
        }
    }

    
    
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << endl;
    }
}

int main() {
    string input;
    cout << "Enter a user input to tokenize: ";
    getline(cin, input);

    cout<<input.length()<<endl;

    tokens(input);

    return 0;
}

