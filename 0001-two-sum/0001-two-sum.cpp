#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store: Key = the number, Value = its index
        std::unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if complement is already in the map
            if (numMap.find(complement) != numMap.end()) {
                // Return the index of the complement and the current index
                return {numMap[complement], i};
            }
            
            // Otherwise, add the current number to the map
            numMap[nums[i]] = i;
        }
        
        // Since the problem guarantees one solution, we don't strictly 
        // need a return here, but it's good practice.
        return {};
    }
};