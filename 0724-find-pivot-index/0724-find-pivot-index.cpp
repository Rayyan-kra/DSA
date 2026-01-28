class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.empty()) return -1;

        int left = 0;
        int right = 0;
        int sum = 0;

        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
        }

        for(int i = 0; i < nums.size(); i++){
            right = sum - left - nums[i];
            if(left == right){
                return i;
            }
            left += nums[i];  
        }
        return -1;
    }
};
