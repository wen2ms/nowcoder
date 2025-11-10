#include <cstdint>
#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    int nums_count;
    std::cin >> nums_count;
    std::vector<int> nums(nums_count);
    for (int& num : nums) {
        std::cin >> num;
    }

    std::unordered_map<int64_t, int> count;
    count[0] = 1;
    int64_t prefix = 0;
    int64_t result = 0;
    for (int& num : nums) {
        prefix ^= num;
        result += count[prefix];
        ++count[prefix];
    }
    std::cout << result << '\n';

    return 0;
}