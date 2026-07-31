class Solution {
public:
    void helper(vector<int>& candidates, int target,int i,int n,int sum,vector<int> &ans,vector<vector<int>> &temp){
        if(sum==target){
            temp.push_back(ans);
            return;
        }
        if (i >= n || sum > target) {
            return;
            }
        sum+=candidates[i];
        ans.push_back(candidates[i]);
        helper(candidates,target,i,n,sum,ans,temp);
        sum -= candidates[i];
        ans.pop_back();
        helper(candidates,target,i+1,n,sum,ans,temp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     int n=candidates.size();
     int i=0;
     int sum=0;
     vector<int> ans;
     vector<vector<int>> temp;
     helper(candidates,target,i,n,sum,ans,temp);
     return temp;   
    }
};