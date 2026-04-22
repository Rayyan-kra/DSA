class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<int,int>> q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                if(grid[i][j] == '1' && !vis[i][j]){
                    ans++; 

                    q.push({i,j});
                    vis[i][j] = true;

                    while(q.size() > 0){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();

                        if(x-1 >=0 && !vis[x-1][y] && grid[x-1][y] =='1'){
                            q.push({x-1,y});
                            vis[x-1][y] = true;
                        }
                        if(x+1 <n && !vis[x+1][y] && grid[x+1][y] =='1'){
                            q.push({x+1,y});
                            vis[x+1][y] = true;
                        }
                        if(y-1>=0 && !vis[x][y-1] && grid[x][y-1] =='1'){
                            q.push({x,y-1});
                            vis[x][y-1] = true;
                        }
                        if(y+1 <m && !vis[x][y+1] && grid[x][y+1] =='1'){
                            q.push({x,y+1});
                            vis[x][y+1] = true;
                        }
                    }
                }
            }
        }

        return ans;
    }
};