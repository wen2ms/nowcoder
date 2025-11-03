#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        std::vector<int> nums(nums_count);
        int64_t sum = 0;
        for (int& num : nums) {
            std::cin >> num;
            sum += num;
        }
        std::cout << sum << '\n';
    }

    return 0;
}