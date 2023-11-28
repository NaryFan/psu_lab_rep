
#include <iostream>
#include <cmath>


double qvcirle_counter(double x, bool invertOYandchenjezeropontswitc)
{
    if (invertOYandchenjezeropontswitc) {
        return (-sqrt(9 - pow(sqrt(1 - x - 7), 4)));
    }
    else return sqrt(9 - pow(sqrt(-x), 4));

}


double func_chus(double x) {
    if (x < -9 || x > 9) return x;
    if (x == -9) return 0;
    if (x > -9 && x <= -6) return qvcirle_counter(x, 1);
    if (x > -6 && x <= -3) return x + 3;
    if (x > -3 && x <= 0) return qvcirle_counter(x, 0);
    if (x > 0 && x < 3) return -x + 3;
    if (x >= 3 && x <= 9) return (x - 3) / 2;

}


int main()
{
    double x;

    while (true)
    {
        std::cin >> x;
        std::cout << func_chus(x) << "\n\n";
        
    }
    return 0;
}

