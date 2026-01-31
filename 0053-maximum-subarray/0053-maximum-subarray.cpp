class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxlength=INT_MIN;
        int sum=0;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            maxlength=max(maxlength,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxlength;
    }
};