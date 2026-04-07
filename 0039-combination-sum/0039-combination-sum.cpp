class Solution {
public:
    void helper(int idx, vector<int>& candidates, int target,
                vector<vector<int>> &ans, vector<int> ds) {

        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        if (idx >= candidates.size()) return;  

        if (candidates[idx] <= target) {      
            ds.push_back(candidates[idx]);
            helper(idx, candidates, target - candidates[idx], ans, ds);
            ds.pop_back();
        }

        helper(idx + 1, candidates, target, ans, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(0, candidates, target, ans, ds);
        return ans;
    }
};