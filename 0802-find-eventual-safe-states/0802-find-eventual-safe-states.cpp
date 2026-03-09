class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        
        vector<vector<int>> rev(n); 
        vector<int> outdeg(n);
        queue<int> q;
        
        // build reverse graph and count outdegree
        for(int i = 0; i < n; i++){
            outdeg[i] = graph[i].size();
            for(int v : graph[i]){
                rev[v].push_back(i);
            }
        }
        
        // terminal nodes
        for(int i = 0; i < n; i++){
            if(outdeg[i] == 0){
                q.push(i);
            }
        }
        
        vector<int> safe;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            safe.push_back(node);
            
            for(int prev : rev[node]){
                outdeg[prev]--;
                if(outdeg[prev] == 0){
                    q.push(prev);
                }
            }
        }
        
        sort(safe.begin(), safe.end());
        return safe;
    }
};