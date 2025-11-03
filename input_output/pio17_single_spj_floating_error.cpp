#include <cmath>
#include <iomanip>
#include <iostream>
// #include <numbers>

int main() {
    int radius;
    std::cin >> radius;
    // double area = std::numbers::pi * radius * radius;
    double area = M_PI * radius * radius;
    std::cout << std::fixed << std::setprecision(6) << area << '\n';

    return 0;
}