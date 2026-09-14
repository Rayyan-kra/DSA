class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int maxi = 1;
        int ans = nums[0];

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 1; i++) {
            if(nums[i] == nums[i + 1]) {
                count++;
            }
            else {
                count = 1;
            }

            if(count > maxi) {
                maxi = count;
                ans = nums[i];
            }
        }

        return ans;
    }
};