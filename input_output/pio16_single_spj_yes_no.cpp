#include <iostream>

int main() {
    int num;
    std::cin >> num;
    if (num % 2 == 1) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
    }

    return 0;
}