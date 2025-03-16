#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> num_to_index; // Map to store number and its index
    
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i]; // Calculate the complement
        
        // Check if the complement exists in the map
        if (num_to_index.find(complement) != num_to_index.end()) {
            return {num_to_index[complement], i}; // Return indices
        }
        
        // Store the number and its index in the map
        num_to_index[nums[i]] = i;
    }
    
    return {}; // Return an empty vector if no solution is found
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    std::vector<int> result = twoSum(nums, target);
    
    std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl; // Output: Indices: 0, 1
    
    return 0;
}
