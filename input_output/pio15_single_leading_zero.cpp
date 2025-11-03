#include <iomanip>
#include <iostream>

int main() {
    int num;
    std::cin >> num;
    std::cout << std::setw(9) << std::setfill('0') << num << '\n';

    return 0;
}