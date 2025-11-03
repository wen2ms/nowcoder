#include <iostream>

int main() {
    int nums_count;
    int target;
    std::cin >> nums_count >> target;

    for (int i = 0; i < nums_count - 1; ++i) {
        std::cout << target / nums_count << ' ';
    }
    std::cout << target / nums_count + target % nums_count << '\n';

    return 0;
}