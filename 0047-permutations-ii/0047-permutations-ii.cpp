class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp, vector<bool>& vis, vector<vector<int>>& ans) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (vis[i]) continue;

            // skip duplicates
            if (i > 0 && nums[i] == nums[i-1] && !vis[i-1]) continue;

            vis[i] = true;
            temp.push_back(nums[i]);

            solve(nums, temp, vis, ans);

            temp.pop_back();
            vis[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // important
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> vis(nums.size(), false);

        solve(nums, temp, vis, ans);
        return ans;
    }
};