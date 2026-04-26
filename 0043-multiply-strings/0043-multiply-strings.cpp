class Solution {
public:
    string multiply(string a, string b) {
        if (a == "0" || b == "0") return "0";

        int n = a.size(), m = b.size();
        vector<int> res(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (a[i] - '0') * (b[j] - '0');
                res[i + j + 1] += mul;
            }
        }

        // handle carry
        for (int i = n + m - 1; i > 0; i--) {
            res[i - 1] += res[i] / 10;
            res[i] %= 10;
        }

        // convert to string
        string ans = "";
        for (int x : res) {
            if (!(ans.empty() && x == 0)) {
                ans += (x + '0');
            }
        }

        return ans;
    }
};