#include "PalindromeChecker.h"
#include <queue>
#include <stack>
#include <cctype>

PalindromeChecker::PalindromeChecker() {}

std::string PalindromeChecker::sanitize(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (std::isalnum(static_cast<unsigned char>(c))) {
            result.push_back(std::tolower(static_cast<unsigned char>(c)));
        }
    }
    return result;
}

bool PalindromeChecker::isPalindrome(const std::string& input) {
    std::queue<char> q;
    std::stack<char> s;

    std::string cleaned = sanitize(input);

    for (char c : cleaned) {
        q.push(c);
        s.push(c);
    }

    while (!q.empty()) {
        if (q.front() != s.top()) {
            return false;
        }
        q.pop();
        s.pop();
    }

    return true;
}
