class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int left = 0;
        vector<int> hash; 
        for (int i = 0; i < nums.size(); i++) {
            left += nums[i];
            hash.push_back(left);
        }
        int count = 0;
        for (int i = 0; i < hash.size(); i++) {
            if (hash[i] == k) count++;  

            for (int j = 0; j < i; j++) {  
                if (hash[i] - hash[j] == k) {
                    count++;
                }
            }
        }

        return count;
    }
};
