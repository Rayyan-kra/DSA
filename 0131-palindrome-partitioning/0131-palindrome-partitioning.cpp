class Solution {
public:
     bool isPalin(string part){
        string s1=part;
        reverse(s1.begin(),s1.end());
        if(s1==part)return true;
        return false;
    }

    void helper(string s,vector<string> &ans,vector<vector<string>> &temp){
        if (s.size() == 0) {
            temp.push_back(ans);
            return;
}
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);

            if(isPalin(part)){
                ans.push_back(part);
                helper(s.substr(i+1),ans,temp);
                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
    vector<string> ans ;
    vector<vector<string>> temp;
    helper(s,ans,temp);
    return temp;    
    }
};