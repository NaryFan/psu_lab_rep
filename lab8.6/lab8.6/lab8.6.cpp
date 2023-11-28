#include <vector>
#include <iostream>

std::vector<int> memo = { 1, 1, 1 }; // A[0] = A[1] = A[2] = 1, остальные значения начально неизвестны

int A(int n) {
    if (n >= memo.size()) memo.resize(n + 1, -1); // убедиться, что размер memo достаточный 
    if (memo[n] != -1) return memo[n];

    return memo[n] = A(n % 2) + A(n % 3);
}

int main() {
    std::cout << A(10) << std::endl;
}