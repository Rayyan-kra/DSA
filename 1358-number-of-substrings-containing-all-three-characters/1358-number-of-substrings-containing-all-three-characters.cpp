class Solution {
public:
    int numberOfSubstrings(string s) {
        int count[3] = {0, 0, 0};
        int i = 0;
        int ans = 0;

        for (int j = 0; j < s.size(); j++) {
            count[s[j] - 'a']++;

            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                ans += s.size() - j;
                count[s[i] - 'a']--;
                i++;
            }
        }

        return ans;
    }
};
