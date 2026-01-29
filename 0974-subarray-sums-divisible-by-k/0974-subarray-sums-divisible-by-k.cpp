class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        freq[0] = 1;       
        int curr = 0;
        int ans = 0;

        for(int x : nums) {
            curr += x;
            int rem = ((curr % k) + k) % k;   

            ans += freq[rem];               
            freq[rem]++;                       
        }

        return ans;
    }
};
