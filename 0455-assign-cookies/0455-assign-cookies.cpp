class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m=g.size();
        int n=s.size();
        int count=0;
        int l=0;
        int r=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(l<g.size() && r<s.size()){
            if(g[l]<=s[r]){
              count++;
              l++;
              r++;  
            }else if(g[l]>s[r]){
                r++;
            }
            else if(g[l]<s[r]){
                l++;
            }
        }
        return count;
    }
};