#include<iostream>

unsigned long long Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}

int main()
{
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0)
    {
        std::cout << "Input must be a positive integer.";
        return 1;
    }

    std::cout << "Factorial of " << n << " = " << Factorial(n);
    return 0;
}