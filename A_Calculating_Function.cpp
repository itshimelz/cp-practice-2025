/*
--- ---
time: 14:27:17+06:00
date: Thu 06, Mar 2025
author: Rahat H. Himel
problem: https://codeforces.com/problemset/problem/486/A

--- ---
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, r;
    cin >> n;

     if (n % 2 == 0)
        r = n/2;
    else
        r = -ceil((n/2.0));

    cout << r;
    return 0;
}
