class Solution { 
public: 
    void helper(int n, vector<string> &ans, int i, int j, string temp) { 
        if(i == n && j == n) { 
            ans.push_back(temp); 
            return; 
        } 

        if(i < n) {
            helper(n, ans, i + 1, j, temp + "("); 
        }

        if(j < i) {
            helper(n, ans, i, j + 1, temp + ")"); 
        }
    } 
 
    vector<string> generateParenthesis(int n) { 
        vector<string> ans; 
        string temp; 
        helper(n, ans, 0, 0, temp); 
        return ans;     
    } 
};