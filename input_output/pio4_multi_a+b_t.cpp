#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num1;
        int num2;
        std::cin >> num1 >> num2;
        std::cout << num1 + num2 << '\n';
    }

    return 0;
}