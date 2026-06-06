class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n);
        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int leftSum = (i == 0) ? 0 : prefix[i - 1];
            int rightSum = prefix[n - 1] - prefix[i];

            ans[i] = abs(leftSum - rightSum);
        }

        return ans;
    }
};