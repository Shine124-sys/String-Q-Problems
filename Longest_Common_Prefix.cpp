#include <bits/stdc++.h>
using namespace std;

int main() {
    string arr[] = {"apple", "app", "ape"};
    sort(arr, arr + 3);
    string str1 = arr[0];
    string str2 = arr[2];

    
    string commonChars = "";

    // Assuming all strings have the same length, you can use str1.length() for iteration
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == str2[i] ) { // Check if character at index i is the same in all strings
            commonChars += str1[i]; // Append the common character to commonChars
        }
    }

    cout << commonChars << endl; // Output the common characters found
    return 0;
}
