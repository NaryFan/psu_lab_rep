#include <iostream>
#include <cmath>

std::pair<double, int> calculateFunctionValue(double x, double epsilon) {
    double result = 0.0;
    double term = x;
    int n = 1;

    while (std::abs(term) > epsilon) {
        result += term;
        term *= -1 * x * x / ((2 * n) * (2 * n + 1));
        n++;
    }

    result *= 2;
    return { result, n - 1 };
}

int main() {
    setlocale(LC_ALL, "Russian");
    double x, epsilon;
    std::cout << "Введите значение аргумента x: ";
    std::cin >> x;
    std::cout << "Введите точность epsilon: ";
    std::cin >> epsilon;

    std::pair<double, int> functionValueAndTermCount = calculateFunctionValue(x, epsilon);

    std::cout << "Значение функции при x = " << x << ": " << functionValueAndTermCount.first << std::endl;
    std::cout << "Количество просуммированных членов ряда: " << functionValueAndTermCount.second << std::endl;

    return 0;
}