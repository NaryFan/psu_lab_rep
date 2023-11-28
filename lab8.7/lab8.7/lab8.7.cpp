#include <iostream>

int A(int x, int y) {
    if (x == 0) {
        return y + 1;
    }
    else if (y == 0) {
        return A(x - 1, 1);
    }
    else {
        return A(x - 1, A(x, y - 1));
    }
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << A(x, y) << std::endl;
    return 0;
}