#include <iostream>
#include <string>
#include <vector>

int main() {
    int num_of_strs;
    int len;
    std::cin >> num_of_strs >> len;
    std::vector<std::string> strs(num_of_strs);
    for (std::string& str : strs) {
        std::cin >> str;
    }
    for (int i = num_of_strs - 1; i >= 0; --i) {
        for (int j = len - 1; j >= 0; --j) {
            std::cout << strs[i][j];
        }
        std::cout << '\n';
    }

    return 0;
}