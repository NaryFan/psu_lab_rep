#include<iostream>

double P(int n, double x) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return ((2 * n - 1) * P(n - 1, x) - (n - 1) * P(n - 2, x)) / n;
}

int main() {
    double x;
    int n;
    std::cin >> x >> n;
    std::cout << "P(" << n << ", " << x << ") = " << P(n, x) << std::endl;

    return 0;
}