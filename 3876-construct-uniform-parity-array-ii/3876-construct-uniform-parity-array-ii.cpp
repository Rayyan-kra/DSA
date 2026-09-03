class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int mini = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                mini = min(mini, nums[i]);
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0 && mini != INT_MAX && nums[i] < mini) {
                return false;
            }
        }

        return true;
    }
};