#include <iostream>
#include <cmath>

bool checkPointInCircle(double x, double y, double radius) {
    double distance = std::sqrt(x * x + y * y);

    bool isInCircle = false;

    if (distance <= radius) {
        double angle = std::atan2(y, x);

        double pi = 3.1416;

        if ((angle >= pi/4 && angle <= pi / 2) || (angle >= -3 * pi / 4 && angle <= -pi/2)) {
            isInCircle = true;
        }
    }

    return isInCircle;
}

int main() {
    double radius = 5;

    double point1_x = 3;
    double point1_y = 4;

    double point2_x = 6;
    double point2_y = 2;

    double point3_x = -2;
    double point3_y = -3;

    std::cout << std::boolalpha << checkPointInCircle(point1_x, point1_y, radius) << std::endl;  // True
    std::cout << std::boolalpha << checkPointInCircle(point2_x, point2_y, radius) << std::endl;  // False
    std::cout << std::boolalpha << checkPointInCircle(point3_x, point3_y, radius) << std::endl;  // True

    return 0;
}