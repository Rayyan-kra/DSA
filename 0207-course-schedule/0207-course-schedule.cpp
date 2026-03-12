class Solution {
public:
    bool helper(int src,vector<bool> &vis,vector<bool> &rect,vector<vector<int>>&edges){
        vis[src]=true;
        rect[src]=true;

        for(int i=0;i<edges.size();i++){
        int v=edges[i][0];
        int u=edges[i][1];

        if(u==src){
            if(!vis[v]){
                if(helper(v,vis,rect,edges)) return true;
            }
            else if(rect[v]){
                return true;
            }
            
        }
      }
      rect[src]=false;
      return false;
    }
    bool canFinish(int n, vector<vector<int>>&edges) {
        vector<bool> vis(n,false);
        vector<bool> rect(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(helper(i,vis,rect,edges))return false;
            }
        }
        return true;
    }
};