#include <iostream>
#include <unordered_map>
#include <string>

int firstUniqChar(const std::string& s) {
    std::unordered_map<char, int> charCount;

    // Count occurrence of each character
    for (char ch : s) {
        charCount[ch]++;
    }

    // Find the index of the first non-repeating character
    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return i; // Return the index of the first non-repeating character
        }
    }

    return -1; // Return -1 if no non-repeating character is found
}

// Example usage:
int main() {
    std::string s1 = "leetcode";
    std::string s2 = "loveleetcode";
    std::string s3 = "aabb";

    std::cout << firstUniqChar(s1) << std::endl; // Output: 0
    std::cout << firstUniqChar(s2) << std::endl; // Output: 2
    std::cout << firstUniqChar(s3) << std::endl; // Output: -1

    return 0;
}
