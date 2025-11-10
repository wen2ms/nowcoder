#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

const int64_t kMod = 998244353;

int64_t fast_pow(int64_t base, int64_t exp) {
    int64_t result = 1;
    base %= kMod;
    while (exp > 0) {
        if ((exp & 1) == 1) {
            result = result * base % kMod;
        }
        base = base * base % kMod;
        exp >>= 1;
    }
    return result;
}

int64_t mod_inv(int64_t num) {
    return fast_pow(num, kMod - 2);
}

int main() {
    int nums_count;
    int len;
    std::cin >> nums_count >> len;
    std::vector<int> nums(nums_count);
    for (int& num : nums) {
        std::cin >> num;
    }
    int64_t maximum = 0;
    int64_t curr = 1;
    int left = 0;
    for (int right = 0; right < nums_count; ++right) {
        if (nums[right] == 0) {
            left = right + 1;
            curr = 1;
        } else {
            curr = curr * nums[right] % kMod;
        }
        if (right - left + 1 == len) {
            maximum = std::max(maximum, curr);
            curr = curr * mod_inv(nums[left]) % kMod;
            ++left;
        }
    }
    std::cout << maximum << '\n';

    return 0;
}