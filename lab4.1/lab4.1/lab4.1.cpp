#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    std::vector<double> arr(n);
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    double sum_of_negatives = 0.0;
    for (double num : arr) {
        if (num < 0) {
            sum_of_negatives += num;
        }
    }
    std::cout << "Сумма отрицательных элементов: " << sum_of_negatives << std::endl;

    auto min_max = std::minmax_element(arr.begin(), arr.end());
    auto min_index = std::distance(arr.begin(), min_max.first);
    auto max_index = std::distance(arr.begin(), min_max.second);

    double product = 1.0;
    bool pr_cheng_chec = false;
    if (min_index < max_index) {
        for (int i = min_index + 1; i < max_index; i++) {
            if (i != max_index) { pr_cheng_chec = true; }
            product *= arr[i];
        }
    }
    else {
        for (int i = max_index + 1; i < min_index; i++) {
            if (i != min_index) { pr_cheng_chec = true; }
            product *= arr[i];
        }
    }
    if (pr_cheng_chec) { std::cout << "Произведение элементов между минимальным и максимальным: " << product << std::endl; }
    if (!pr_cheng_chec) { std::cout << "Нет таких чисел! " << std::endl;}

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    std::cout << "Массив, упорядоченный по возрастанию: ";
    for (double num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}