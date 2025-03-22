#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    // Start merging from the end of nums1 to avoid overwriting
    int i = m - 1; // Last valid element in nums1
    int j = n - 1; // Last element in nums2
    int k = m + n - 1; // Last position in nums1

    // Compare and merge
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If there are remaining elements in nums2, copy them
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }

    // No need to copy the remaining elements of nums1 as they are already in place
}

int main() {
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // Example 1
    std::vector<int> nums2 = {2, 5, 6};          // Example 1
    int m = 3; // Number of initialized elements in nums1
    int n = 3; // Number of initialized elements in nums2

    merge(nums1, m, nums2, n);

    // Output the merged array
    std::cout << "Merged array: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Output: [1, 2, 2
