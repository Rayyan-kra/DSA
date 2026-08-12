class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        int count = 0;
        int n = nums.size();
        int left = 0;

        for(int i = 0; i < n; i++) {
            mpp[nums[i]]++;

            while(mpp[nums[i]] > k) {
                mpp[nums[left]]--;
                left++;
            }

            count = max(count, i - left + 1);
        }

        return count;
    }
};