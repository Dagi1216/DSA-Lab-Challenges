#include <iostream>
#include <vector>

void reverseString(std::vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        // Swap characters
        std::swap(s[left], s[right]);
        // Move towards the middle
        left++;
        right--;
    }
}

// Example usage:
int main() {
    std::vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    
    // Print the reversed string
    for (char c : s) {
        std::cout << c;
    }
    std::cout << std::endl; // Output: "olleh"

    return 0;
}
