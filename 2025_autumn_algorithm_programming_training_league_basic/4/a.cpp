#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    std::vector<int64_t> sums(81);
    sums[0] = 1;
    sums[1] = 3;
    sums[2] = 5;
    for (int i = 3; i <= 80; ++i) {
        sums[i] = sums[i - 1] + sums[i - 2];
    }
    while (total_cases > 0) {
        --total_cases;
        int num;
        std::cin >> num;
        std::cout << sums[num] << '\n';
    }

    return 0;
}