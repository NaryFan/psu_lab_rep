#include<iostream>

unsigned long long fib(int n) {
    if (n <= 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    std::cout << "Enter the term to find: ";
    std::cin >> n;
    std::cout << "The " << n << "th term in the sequence is: " << fib(n) << std::endl;
    return 0;
}