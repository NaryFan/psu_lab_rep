// lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

bool checkPointInCircle(double x, double y, double radius) {
    double distance = sqrt(x * x + y * y);

    bool isInCircle = false;

    if (distance <= radius) {
        double angle = atan2(y, x);

        double pi = 3.1416;

        if ((angle >= pi / 4 && angle <= pi / 2) || (angle >= -3 * pi / 4 && angle <= -pi / 2)) {
            isInCircle = true;
        }
    }

    return isInCircle;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int radius;
    cout << "Введите радиус мешени: ";
    cin >> radius;
    
    for (int i = 0; i < 10; i++)
    {
        int x;
        int y;
        cout << "Введите коорденаты выстрела: ";
        cin >> x >> y;
        if (checkPointInCircle(x, y, radius)) { cout << "Попал\n"; }
        else { cout << "Не попал\n"; }
    }
    return 0;
}
