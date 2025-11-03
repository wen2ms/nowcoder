#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int rows_count;
        int cols_count;
        std::cin >> rows_count >> cols_count;
        std::vector<std::vector<int>> grid(rows_count, std::vector<int>(cols_count));
        int64_t sum = 0;
        for (std::vector<int>& row : grid) {
            for (int& num : row) {
                std::cin >> num;
                sum += num;
            }
        }
        std::cout << sum << '\n';
    }

    return 0;
}