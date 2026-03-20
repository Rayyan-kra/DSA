class Solution {
public:
    bool depth(int i, int j, vector<vector<char>>& nums, string w, int idx){
        // base case
        if(idx == w.size()) return true;

        // boundary + mismatch check
        if(i < 0 || j < 0 || i >= nums.size() || j >= nums[0].size() || nums[i][j] != w[idx])
            return false;

        char temp = nums[i][j];
        nums[i][j] = '#'; // mark visited

        bool found = depth(i+1,j,nums,w,idx+1) ||
                     depth(i-1,j,nums,w,idx+1) ||
                     depth(i,j+1,nums,w,idx+1) ||
                     depth(i,j-1,nums,w,idx+1);

        nums[i][j] = temp; // backtrack
        return found;
    }

    bool exist(vector<vector<char>>& nums, string w) {
        int n = nums.size(), m = nums[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(depth(i, j, nums, w, 0)) return true;
            }
        }
        return false;
    }
};