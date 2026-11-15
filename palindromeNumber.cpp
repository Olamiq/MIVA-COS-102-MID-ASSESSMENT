#include <iostream>

using namespace std;

int main() {
    cout << "\n--- Number Palindrome Checker ---\n";
    long long originalNum;
    
    cout << "Enter an integer: ";
    if (!(cin >> originalNum)) {
        cout << "Invalid input. Please enter a valid integer.\n";
        return 1;
    }
    
    // Negative numbers are typically not considered palindromes
    if (originalNum < 0) {
        cout << "Result: " << originalNum << " is NOT a palindrome.\n";
        return 0;
    }
    
    long long num = originalNum;
    long long reversedNum = 0;
    
    // Reverse the number mathematically
    while (num > 0) {
        long long digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    // Compare original and reversed numbers
    if (originalNum == reversedNum) {
        cout << "Result: " << originalNum << " IS a palindrome.\n";
    } else {
        cout << "Result: " << originalNum << " is NOT a palindrome.\n";
    }
    
    return 0;
}