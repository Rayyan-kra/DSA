class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        if (k < 0) return 0;   // VERY IMPORTANT

        int i = 0;
        int odd = 0;
        int count = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] % 2 == 1)
                odd++;

            while (odd > k) {
                if (nums[i] % 2 == 1)
                    odd--;
                i++;
            }

            count += (j - i + 1);
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
