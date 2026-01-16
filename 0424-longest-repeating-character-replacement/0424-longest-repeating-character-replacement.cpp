class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);

        int i = 0;          // start pointer
        int replace = 0;    // replacement count
        int maxFreq = 0;    // most frequent char count
        int ans = 0;

        for (int j = 0; j < s.size(); j++) {
            // include current character
            freq[s[j] - 'A']++;
            maxFreq = max(maxFreq, freq[s[j] - 'A']);

            // replacements needed
            replace = (j - i + 1) - maxFreq;

            // if replacements exceed k, move start
            if (replace > k) {
                freq[s[i] - 'A']--;
                i++;
            }

            // valid window
            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};
