class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>> st;
        for(auto o : obstacles) {
            st.insert({o[0], o[1]});
        }

        int x = 0, y = 0;
        int dir = 0; 
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};

        int ans = 0;

        for(int c : commands) {
            if(c == -1) dir = (dir + 1) % 4;      // right
            else if(c == -2) dir = (dir + 3) % 4; // left
            else {
                for(int i = 0; i < c; i++) {
                    int nx = x + dx[dir];
                    int ny = y + dy[dir];

                    if(st.count({nx, ny})) break;

                    x = nx;
                    y = ny;
                    ans = max(ans, x*x + y*y);
                }
            }
        }
        return ans;
    }
};