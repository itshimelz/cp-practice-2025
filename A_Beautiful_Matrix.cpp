/*
--- ---
author: Rahat H. Himel
problem: https://codeforces.com/problemset/problem/263/A
--- ---
*/

#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int matrix[5][5];
    int result;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                result = abs(i - 2) + abs(j - 2);
                break;
            }
            
        }
    }
    cout << result << endl;
    return 0;
}
