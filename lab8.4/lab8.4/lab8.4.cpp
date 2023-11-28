#include<iostream>

int gcd(int m, int n) {
    if (m == 0) {
        return n;
    }
    else if (m < n) {
        return gcd(n, m);
    }
    else {
        return gcd(m - n, n);
    }
}

int main() {
    int m, n;
    std::cin >> m >> n;
    std::cout << gcd(m, n);
    return 0;
}