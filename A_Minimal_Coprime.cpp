/*
--- ---
time: 19:41:06+06:00
date: Fri 07, Feb 2025
author: Rahat H. Himel
problem: https://codeforces.com/problemset/problem/2063/A

*INPUT*
6
1 2
1 10
49 49
69 420
1 1
9982 44353

*QUESTION*

--- ---
*/

#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solution() {
    int l, r;
    std::cin >> l;
    std::cin >> r;

    if (l == r) {
        if (l == 1) {
            cout << 1;
        } else {
            cout << 0;
        }
    }

    if (l < r)
        cout << r - l;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solution();
        cout << endl;
    }
    return 0;
}