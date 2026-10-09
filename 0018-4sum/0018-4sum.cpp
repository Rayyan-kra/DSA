class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        if(j>i+1 && nums[j]==nums[j-1]) continue;
        int l=j+1;
        int k=nums.size()-1;
        while(l<k){
            long long sum=(long long)nums[i]+nums[l]+nums[k]+nums[j];

            if(sum<target){
                l++;
            }
            else if(sum>target){
                k--;
            }
            else{
                ans.push_back({nums[l],nums[k],nums[i],nums[j]});
                l++;
                k--;
               while(l<k && nums[l]==nums[l-1]) l++;
               while(l<k && nums[k]==nums[k+1]) k--;
            }
            
        } 
        }
    }    
    return ans;
    }
};