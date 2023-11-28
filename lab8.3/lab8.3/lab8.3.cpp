#include <iostream>

int a(int n) {
    if (n <= 1)
        return 1;
    else
        return n - a(a(n - 1));
}

int main() {
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;
    std::cout << "a(" << n << ") = " << a(n) << std::endl;
    return 0;
}