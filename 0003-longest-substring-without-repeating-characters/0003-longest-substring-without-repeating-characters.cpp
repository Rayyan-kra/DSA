class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int longest = 0;

        // Try every starting point
        for (int i = 0; i < n; i++) {
            vector<bool> seen(256, false);  // to track characters in this substring
            int length = 0;

            // Try to extend substring from i
            for (int j = i; j < n; j++) {
                if (seen[s[j]]) break;  // repeated character → stop

                seen[s[j]] = true;
                length++;
            }

            longest = max(longest, length);
        }

        return longest;
    }
};