#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;

    std::cout << "Введите целое число N: ";
    std::cin >> N;
    std::cout << "Введите строку S: ";
    std::cin >> S;

    if (S.length() > N) {
        S = S.substr(S.length() - N);
    }
    else if (S.length() < N) {
        S = std::string(N - S.length(), '.') + S;
    }

    std::cout << "Результат: " << "\"" << S << "\"" <<std::endl;

    return 0;
}
