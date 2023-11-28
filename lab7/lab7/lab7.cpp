#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int neg_count(vector<double>& arr, int n) {
    setlocale(LC_ALL, "Russian");

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double sum_of_negatives = 0.0;
    for (double num : arr) {
        if (num < 0) {
            sum_of_negatives += num;
        }
    }
    cout << "Сумма отрицательных элементов: " << sum_of_negatives << std::endl;
    return sum_of_negatives;
}

double minmaxF(vector<double> arr){
    auto min_max = minmax_element(arr.begin(), arr.end());
    auto min_index = distance(arr.begin(), min_max.first);
    auto max_index = distance(arr.begin(), min_max.second);

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
    if (pr_cheng_chec) { cout << "Произведение элементов между минимальным и максимальным: " << product << endl; }
    if (!pr_cheng_chec) { cout << "Нет таких чисел! " << std::endl; }

    return product;
}


void arr_sort(vector<double> arr, int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    cout << "Массив, упорядоченный по возрастанию: ";
    for (double num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

//----------------------------------------------------

vector<vector<int>> init(int n, int m)
{
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

int zeroElementCount(vector<vector<int>> matrix, int n, int m) {
    int countRowsWithoutZero = 0;
    for (int i = 0; i < n; i++) {
        bool hasZero = false;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                hasZero = true;
                break;
            }
        }
        if (!hasZero) {
            countRowsWithoutZero++;
        }
    }
    cout << "Количество строк без нулевых элементов: " << countRowsWithoutZero << endl;
    return countRowsWithoutZero;
}

int maxRepeatCounter(vector<vector<int>> matrix, int n, int m) {
    unordered_map<int, int> frequency;
    int maxRepeatedNumber = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            frequency[matrix[i][j]]++;
            if (frequency[matrix[i][j]] > 1 && matrix[i][j] > maxRepeatedNumber) {
                maxRepeatedNumber = matrix[i][j];
            }
        }
    }
    cout << "Максимальное число, встречающееся более одного раза: " << maxRepeatedNumber << endl;
    return maxRepeatedNumber;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    std::vector<double> arr(n);

    neg_count(arr, n);
    minmaxF(arr);
    arr_sort(arr, n);

    int  m;
    cout << "Введите количество строк и столбцов матрицы: ";
    cin >> n >> m;

    vector<vector<int>> arr2 = init(n, m);
    zeroElementCount(arr2, n, m);
    maxRepeatCounter(arr2, n, m);

    return 0;
}