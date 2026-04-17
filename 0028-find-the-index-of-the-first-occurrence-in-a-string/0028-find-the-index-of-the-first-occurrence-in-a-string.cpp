class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; i++) {
            string temp = "";
            for (int j = 0; j < m; j++) {
                temp += haystack[i + j];
            }
            if (temp == needle) return i;
        }
        return -1;
    }
};