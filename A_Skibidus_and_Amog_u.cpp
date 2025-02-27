/*
--- ---
author: Rahat H. Himel
problem: https://codeforces.com/contest/2065/problem/A
--- ---
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solution() {
    string str;
    getline(cin, str);
    int l = str.length();

    if (l >= 2) {
        str.replace(l - 2, 2, "i");
    }
    cout << str;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t >= 0) {
        solution();
        cout << endl;
        t--;
    }
    return 0;
}