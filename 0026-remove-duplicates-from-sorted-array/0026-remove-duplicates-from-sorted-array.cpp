#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        int i = 0; // Unique elements ka index track karne ke liye
        
        for (int j = 1; j < nums.size(); j++) {
            // Agar naya unique element milta hai
            if (nums[j] != nums[i]) {
                i++; // Unique pointer ko aage badhao
                nums[i] = nums[j]; // Unique element ko sahi jagah par overwrite karo
            }
        }
        
        // k = unique elements ki counting (index i + 1)
        return i + 1;
    }
};