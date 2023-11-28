#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int x  = 0, y = 0;
	std::cin >> x >> y;
	if (x <= -2 && y >= 1)
	{
		std::cout << "Точка попала в условие";
	}
	else
	{
		std::cout << "Точка не попала в условие";
	}

	return 0;
}