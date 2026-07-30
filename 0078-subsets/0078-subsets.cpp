class Solution {
public:
    void helper(vector<int>nums,int i,vector<int> ans,vector<vector<int>> &temp){
        if(i==nums.size()){
            temp.push_back(ans);
            return ;
        }
        ans.push_back(nums[i]);
        helper(nums,i+1,ans,temp);
        ans.pop_back();
        helper(nums,i+1,ans,temp);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> ans;
    vector<vector<int>> temp;
    helper(nums,0,ans,temp); 
    return temp;   
    }
};