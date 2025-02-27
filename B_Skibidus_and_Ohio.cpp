/*
--- ---
author: Rahat H. Himel
problem: B
--- ---
*/

#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solution() {
    string s;
    int count = 0;
    getline(cin, s);

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }
    if (count > 0) {
        cout << 1;
    } else {
        cout << s.length();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        solution();
        cout << endl;
    }
    return 0;
}