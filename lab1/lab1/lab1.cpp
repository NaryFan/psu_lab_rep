#include <iostream>
#include <cmath> // в этой библиотеке находятся функции cos и sin

int main() {
    double a;
    std::cout << "Enter the value of a:\n";
    std::cin >> a;

    // Если a предполагается как градусы, преобразуем его в радианы
    double radian_a = a * (3.1415926535 / 180);

    double z = cos(radian_a) + sin(radian_a) + cos(3 * radian_a) + sin(3 * radian_a);
    std::cout << "The output of the formula: " << z << "\n";

    return 0;
}