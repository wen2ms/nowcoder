#include <iostream>
#include <string>

int main() {
    int len;
    std::string str;
    std::cin >> len >> str;
    for (int i = len - 1; i >= 0; --i) {
        std::cout << str[i];
    }
    std::cout << '\n';

    return 0;
}