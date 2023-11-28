#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

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


int main() {
    int n, m;
    cout << "Введите количество строк и столбцов матрицы: ";
    cin >> n >> m;

    // Создаем матрицу и заполняем ее значениями
    arr = init(n, m);

    // Подсчет количества строк без нулевых элементов
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

    // Подсчет максимального числа, встречающегося более одного раза
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

    return 0;
}