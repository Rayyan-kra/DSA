class Solution {
public:
     int helper(vector<vector<int>> &triangle, vector<vector<int>> &dp,int row,int col){
        int n= triangle.size();
        if(row==n-1) return triangle[row][col];
        if(dp[row][col]!=INT_MAX) return dp[row][col];
        int left= helper(triangle,dp,row+1,col);
        int right=helper(triangle,dp,row+1,col+1);
        return dp[row][col]=min(left,right)+triangle[row][col];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n= triangle.size();
        vector<vector<int>> dp(n,vector<int>(triangle.size(),INT_MAX));
       return helper(triangle,dp,0,0); 
    }
};