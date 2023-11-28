#include <iostream>
#include <cmath>

int main() {
    double x_start = 0.1; // Начало интервала
    double x_end = 1.0;   // Конец интервала
    double dx = 0.1;      // Шаг

    std::cout << "x\t|\ty(x)" << std::endl; // Заголовок таблицы

    for (double x = x_start; x <= x_end; x += dx) {
        double y = 2.0 / 4.0 - (1.0 / 4.0) * sin(5.0 / 2.0 * 3.1416 - 8.0 * x);
        std::cout << x << "\t|\t" << y << std::endl; // Вывод значения функции
    }

    return 0;
}