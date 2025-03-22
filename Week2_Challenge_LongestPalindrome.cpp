#include <iostream>
#include <unordered_map>
#include <string>

int longestPalindrome(std::string s) {
    std::unordered_map<char, int> charCount;
    
    // Step 1: Count the frequency of each character
    for (char c : s) {
        charCount[c]++;
    }
    
    int length = 0;
    bool oddFound = false;
    
    // Step 2: Calculate length of the longest palindrome
    for (auto& pair : charCount) {
        int count = pair.second;
        if (count % 2 == 0) {
            length += count; // If count is even, add it all
        } else {
            length += count - 1; // If count is odd, add count - 1
            oddFound = true;      // Mark that we've found an odd count
        }
    }
    
    // Step 3: If there's any odd count, we can add 1 to the length
    if (oddFound) {
        length += 1;
    }
    
    return length;
}

int main() {
    std::string s1 = "abccccdd";
    std::cout << "Length of longest palindrome that can be built from \"" << s1 << "\": "
              << longestPalindrome(s1) << std::endl; // Output: 7
    
    std::string s2 = "a";
    std::cout << "Length of longest palindrome that can be built from \"" << s2 << "\": "
              << longestPalindrome(s2) << std::endl; // Output: 1
    
    return 0;
}
