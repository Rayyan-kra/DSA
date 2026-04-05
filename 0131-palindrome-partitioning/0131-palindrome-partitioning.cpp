class Solution {
public:
    bool isPal(string s){
        int l = 0, r = s.size() - 1;
        while(l < r){
            if(s[l++] != s[r--]) return false;
        }
        return true;
    }

    void solve(string s, vector<string> path, vector<vector<string>> &res){
        if(s.size() == 0){
            res.push_back(path);
            return;
        }

        for(int i = 0; i < s.size(); i++){
            string left = s.substr(0, i + 1);
            if(isPal(left)){
                path.push_back(left);
                solve(s.substr(i + 1), path, res);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        solve(s, {}, res);
        return res;
    }
};