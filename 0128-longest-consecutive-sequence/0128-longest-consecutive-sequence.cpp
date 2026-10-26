class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxi = 0;

        for (int x : s) {
            if (s.find(x - 1) == s.end()) {
                int count = 1;

                while (s.find(x + count) != s.end()) {
                    count++;
                }

                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};