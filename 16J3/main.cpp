#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string possible) {
    //cout << possible << " = ";
    for (int i = 0; i < possible.length()/2; i++) {
        if (possible[i] != possible[possible.length() - i - 1]) {
            //cout << "false" << endl;
            return false;
        }
    }
    //cout << "true" << endl;
    return true;
}

int main() {
    string input;
    cin >> input;
    int longest = 0;
    for (int start = 0; start < input.length()+1; start++) {
        for (int length = 1; length < input.length() + 1 - start; length++) {
            bool x = is_palindrome(input.substr(start, length));
            if (x == true && length > longest) {
                longest = length;
            }
        }
    }
    cout << longest;
    return 0;
}