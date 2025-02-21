/*
--- ---
author: Rahat H. Himel
problem: https://codeforces.com/problemset/problem/1/A
--- ---
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a;
    cin >> n >> m >> a;

    long long length = (n + a - 1) / a;
    long long width = (m + a - 1) / a;

    cout << length * width;
    return 0;
}

