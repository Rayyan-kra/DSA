class Solution {
public:
    unordered_set<string> st;
    vector<int> dp;   // -1 = unvisited, 0 = false, 1 = true

    bool solve(int idx, string &s) {
        int n = s.length();

        if (idx == n) return true;

        if (dp[idx] != -1)   // already computed
            return dp[idx];

        for (int l = 1; idx + l <= n; l++) {
            string temp = s.substr(idx, l);

            if (st.find(temp) != st.end() && solve(idx + l, s)) {
                return dp[idx] = 1;
            }
        }

        return dp[idx] = 0;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        for (string &word : wordDict) {
            st.insert(word);
        }

        dp.resize(s.length(), -1);

        return solve(0, s);
    }
};