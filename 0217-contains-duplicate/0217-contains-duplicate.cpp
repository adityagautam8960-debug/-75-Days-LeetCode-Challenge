#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        // Unordered set duplicate allow nahi karta aur search O(1) mein karta hai
        std::unordered_set<int> seen;
        
        for (int num : nums) {
            // Agar number pehle se set mein maujood hai
            if (seen.count(num)) {
                return true;
            }
            // Warna number ko set mein insert karo
            seen.insert(num);
        }
        
        // Agar poora loop chal gaya aur koi duplicate nahi mila
        return false;
    }
};