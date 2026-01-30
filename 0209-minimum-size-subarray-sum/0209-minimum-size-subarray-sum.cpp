class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0;
        int sum=0;
        int minlength=nums.size()+1;
        for(int r=0;r<nums.size();r++){
            sum =sum+nums[r];
            while(sum>=target){
                minlength=min(minlength,r-l+1);
                sum=sum-nums[l];
                l++;
            }
        }
        return (minlength == nums.size() + 1) ? 0 : minlength;
    }
};