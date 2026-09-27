class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        if(nums.size() == 1) return nums[0];
        sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>nums.size()/2){
            return nums[i+1];
        }
    }    
    return -1;
    }
};