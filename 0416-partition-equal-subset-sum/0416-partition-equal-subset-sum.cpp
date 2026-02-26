class Solution {
public:

    bool solve(vector<int> &nums, int i, int x, vector<vector<int>> &dp){
        if(x == 0) return true;
        if(i >= nums.size()) return false;

        if(dp[i][x] != -1) return dp[i][x];

        bool sol = false;

        if(nums[i] <= x){
            sol = solve(nums, i+1, x-nums[i], dp);
        }

        bool skip = solve(nums, i+1, x, dp);

        return dp[i][x] = sol || skip;
    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int s = accumulate(begin(nums), end(nums), 0);

        if(s % 2 != 0) return false;

        int x = s / 2;

        vector<vector<int>> dp(n, vector<int>(x+1, -1));

        return solve(nums, 0, x, dp);
    }
};