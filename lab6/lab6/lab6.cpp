#include <iostream>
#include <cctype>

int countDigits(const std::string& str) {
    int digitsCount = 0;
    for (char c : str) {
        if (std::isdigit(c)) {
            digitsCount++;
        }
    }
    return digitsCount;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::string str;
    std::cout << "Введите строку: ";
    std::cin>> str;

    int count = countDigits(str);
    std::cout << "Количество цифр в строке: " << count << std::endl;

    return 0;
}