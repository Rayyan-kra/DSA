class Solution {
public:

    bool isCycleDFS(int src, vector<bool> &vis, vector<bool> &recPath, vector<vector<int>>& edges) {
        vis[src] = true;
        recPath[src] = true;

        for(int i = 0; i < edges.size(); i++) {
            int v = edges[i][0];
            int u = edges[i][1];

            if(src == u) {
                if(!vis[v]) {
                    if(isCycleDFS(v, vis, recPath, edges)) {
                        return true;
                    }
                }
                else if(recPath[v]) { // BACK EDGE -> cycle
                    return true;
                }
            }
        }

        recPath[src] = false;
        return false;
    }


    void topoOrder(int src, vector<bool> &vis, stack<int> &s, vector<vector<int>>& edges) {
        vis[src] = true;

        for(int i = 0; i < edges.size(); i++) {
            int v = edges[i][0];
            int u = edges[i][1];

            if(src == u) {
                if(!vis[v]) {
                    topoOrder(v, vis, s, edges);
                }
            }
        }

        s.push(src);
    }


    vector<int> findOrder(int n, vector<vector<int>>& edges) {

        vector<bool> vis(n, false);
        vector<bool> recPath(n, false);

        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                if(isCycleDFS(i, vis, recPath, edges)) {
                    return {};
                }
            }
        }

        stack<int> s;
        fill(vis.begin(), vis.end(), false);

        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                topoOrder(i, vis, s, edges);
            }
        }

        vector<int> ans;

        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }
};