class Solution {
public:
    bool isPalindrome(string &s, int start, int end) {
        while(start < end) {
            if(s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    void helper(string &s, vector<string> &ans, vector<vector<string>> &temp, int i, int n) {

        if(i == n) {
            temp.push_back(ans);
            return;
        }

        for(int j = i; j < n; j++) {

            if(isPalindrome(s, i, j)) {

                ans.push_back(s.substr(i, j - i + 1));

                helper(s, ans, temp, j + 1, n);

                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        int n = s.size();

        vector<string> ans;
        vector<vector<string>> temp;

        helper(s, ans, temp, 0, n);

        return temp;
    }
};