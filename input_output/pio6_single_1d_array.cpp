#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int nums_count;
    std::cin >> nums_count;
    std::vector<int> nums(nums_count);
    int64_t sum = 0;
    for (int& num : nums) {
        std::cin >> num;
        sum += num;
    }
    std::cout << sum << '\n';

    return 0;
}