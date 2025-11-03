#include <iomanip>
#include <iostream>

int main() {
    float num;
    std::cin >> num;
    std::cout << std::fixed << std::setprecision(3) << num << '\n';

    return 0;
}