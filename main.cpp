#include <iostream>
#include <string>
#include "PalindromeChecker.h"

int main() {
    PalindromeChecker checker;
    std::string text;

    std::cout << "Enter a line of text: ";
    std::getline(std::cin, text);

    if (checker.isPalindrome(text)) {
        std::cout << "Result: \"" << text << "\" IS a palindrome.\n";
    } else {
        std::cout << "Result: \"" << text << "\" is NOT a palindrome.\n";
    }

    return 0;
}
