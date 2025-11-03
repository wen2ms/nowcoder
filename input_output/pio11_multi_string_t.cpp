#include <iostream>
#include <string>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int len;
        std::string str;
        std::cin >> len >> str;
        for (int i = len - 1; i >= 0; --i) {
            std::cout << str[i];
        }
        std::cout << '\n';
    }

    return 0;
}