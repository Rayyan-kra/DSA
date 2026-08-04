class Solution {
public:
    void helper(int n, int k, vector<int> &ans, vector<vector<int>> &temp, vector<int> &used) {

        // Stop recursion after finding k permutations
        if (temp.size() == k) {
            return;
        }

        if (ans.size() == n) {
            temp.push_back(ans);
            return;
        }

        for (int num = 1; num <= n; num++) {

            // Stop the loop if k permutations are already found
            if (temp.size() == k) {
                return;
            }

            if (used[num]) continue;

            used[num] = 1;
            ans.push_back(num);

            helper(n, k, ans, temp, used);

            ans.pop_back();
            used[num] = 0;
        }
    }

    string getPermutation(int n, int k) {
        vector<int> ans;
        vector<vector<int>> temp;
        vector<int> used(n + 1, 0);

        helper(n, k, ans, temp, used);

        vector<int> kth = temp[k - 1];

        string result;

        for (int num : kth) {
            result += to_string(num);
        }

        return result;
    }
};