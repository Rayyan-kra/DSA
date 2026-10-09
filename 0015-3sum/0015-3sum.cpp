class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int l=i+1;
        int k=nums.size()-1;
        while(l<k){
            int sum=nums[i]+nums[l]+nums[k];

            if(sum<0){
                l++;
            }
            else if(sum>0){
                k--;
            }
            else{
                ans.push_back({nums[l],nums[k],nums[i]});
                l++;
                k--;
               while(l<k && nums[l]==nums[l-1]) l++;
while(l<k && nums[k]==nums[k+1]) k--;
            }
            
        } 
    }    
    return ans;
    }
};