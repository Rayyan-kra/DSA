class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0];
        int maxi=1;
        int count=1;
        sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>maxi){
            maxi=count;
            ans=nums[i];
        }
    }    
    return ans;
    }
};