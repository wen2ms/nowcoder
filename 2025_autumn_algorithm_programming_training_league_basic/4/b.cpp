#include <iostream>
#include <stack>
#include <unordered_map>

bool is_valid() {
    std::string str;
    std::cin >> str;
    std::unordered_map<char, char> hash{{')', '('}, {'}', '{'}, {']', '['}};
    std::stack<char> stack;
    for (char letter : str) {
        if (!hash.contains(letter)) {
            stack.push(letter);
        } else if (!stack.empty() && stack.top() == hash[letter]) {
            stack.pop();
        } else {
            return false;
        }
    }
    return stack.empty();
}

int main() {
    if (is_valid()) {
        std::cout << "Yes" << '\n';
    } else {
        std::cout << "No" << '\n';
    }

    return 0;
}