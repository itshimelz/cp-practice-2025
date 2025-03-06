/*
--- ---
time: 14:55:16+06:00
date: Wed 05, Mar 2025
author: Rahat H. Himel
problem: https://codeforces.com/problemset/problem/546/A

--- ---
*/

#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, w, n;
    cin >> k >> n >> w;

    int s = ((w * (w + 1)) / 2) * k;

    int r = s - n;

    if (n >= s)
        cout << 0 << endl;
    else
        cout << r << endl;
    return 0;
}