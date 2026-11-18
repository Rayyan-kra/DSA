class Solution {
public:
    void helper(int n,vector<string> &ans,int i,int j,string temp){
        if(n==i && n==j){
            ans.push_back(temp);
            return;
        }
            if(i<n){
                helper(n,ans,i+1,j,temp+ '(');
                }
                if(j<i){
                    helper(n,ans,i,j+1,temp+ ')');
                }
            
        
    }
    vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string temp;
    int i=0;
    int j=0;
    helper(n,ans,i,j,temp);
    return ans;   
    }
};