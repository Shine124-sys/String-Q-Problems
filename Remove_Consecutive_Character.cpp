#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "aaabbb";
    string str1 = ""; // Initialize str1 as empty
    str1 += str[0];   // Assign the first character of str to str1

    for (int i = 1; i < str.length(); i++) {
        if (str[i] != str1.back()) { // Compare current character with the last character of str1
            str1 += str[i]; // Append to str1 if it's not a duplicate
        }
    }

    // Output the modified string
    for (int i = 0; i < str1.length(); i++) {
        cout << str1[i];
    }
    
    return 0;
}
