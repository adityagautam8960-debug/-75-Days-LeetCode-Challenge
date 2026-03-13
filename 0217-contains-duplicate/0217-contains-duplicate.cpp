class Solution {
public:
    bool containsDuplicate(vector<int>& nums){
        int n = nums.size() - 1;
        for (int i = 0; i < n; ++i)
        {
            int swapped = false;
            for (int j = 0; j < n - i; ++j)
            {
                if (nums[j] == nums[j + 1]) return true;
                if (nums[j] > nums[j + 1])
                {
                    swapped = true;
                    std::swap(nums[j], nums[j + 1]);
                }
            }
            if (!swapped) return false;
        }
        return false;
    }
};