#ifndef PALINDROMECHECKER_H
#define PALINDROMECHECKER_H

#include <string>

class PalindromeChecker {
public:
    // Constructor
    PalindromeChecker();

    // Checks if the given text is a palindrome
    bool isPalindrome(const std::string& input);

private:
    // Helper to sanitize input (lowercase, remove non-alphanumeric)
    std::string sanitize(const std::string& input);
};

#endif // PALINDROMECHECKER_H
