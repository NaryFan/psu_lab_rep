#include <iostream>

int  findSum(int* arr, int size) {
    int sum;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void Sort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        bool swapped = false;
        for (int i = 0; i < size - step - 1; ++i) {

            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int* findMaxSumArray(int* arr1, int* arr2, int size) {
    int sum1 = 0;
    int sum2 = 0;


    // Возвращаем указатель на массив с максимальной суммой
    if (findSum(arr1, size) >= findSum(arr2, size)) {
        return arr1;
    }
    else {
        return arr2;
    }
}

void out(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    const int size = 20;

    int array1[size];
    int array2[size];
    int array3[size];

    // Заполняем массивы случайными значениями от -10 до 10
    for (int i = 0; i < size; i++) {
        array1[i] = rand() % 21 - 10;
        array2[i] = rand() % 21 - 10;
        array3[i] = rand() % 21 - 10;
        int array3[size];
    }

    out(array1, size);
    out(array2, size);
    out(array3, size);


    int* maxSumArray = findMaxSumArray(array1, array2, size);
    Sort(maxSumArray, size);
    out(maxSumArray, size);


    int* maxSumArray = findMaxSumArray(array2, array3, size);
    Sort(maxSumArray, size);
    out(maxSumArray, size);


    int* maxSumArray = findMaxSumArray(array3, array1, size);
    Sort(maxSumArray, size);
    out(maxSumArray, size);


    return 0;
}