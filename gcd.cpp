#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a - b, b);

    return gcd(a, b - a);
}

int main() {
    int t;

    int a = 1, b = 3;
    std::cout << gcd(a, b);

    return 0;
}