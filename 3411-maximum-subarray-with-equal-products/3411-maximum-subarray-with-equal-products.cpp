class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            long long prod = 1, g = 0, l = 1;

            for(int j = i; j < n; j++) {

                if(prod > 1000000000000000000LL / nums[j])
                    break;

                prod *= nums[j];
                g = __gcd(g, (long long)nums[j]);
                l = lcm(l, (long long)nums[j]);

                if(prod == g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};