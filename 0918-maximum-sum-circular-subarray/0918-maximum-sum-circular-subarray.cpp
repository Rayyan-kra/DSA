class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        int maximum =INT_MIN;
        int m = nums.size();
        int sum1 =0;
        int maximum1 =INT_MAX;
        int total =0;
      for(int i = 0;i<n;i++){
        total += nums[i];
        sum +=nums[i];
        maximum =max(maximum,sum);
        if(sum<0){
        sum=0;
        }
      }
        for(int i =0;i<m;i++){
        sum1 +=nums[i];
        maximum1 =min(maximum1,sum1);
        if(sum1>0){
        sum1=0;
        }
      }
      if(maximum < 0) return maximum;
      return max(maximum,total-maximum1);
    }
};