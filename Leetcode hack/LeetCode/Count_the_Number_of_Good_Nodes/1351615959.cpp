class Solution {
public:
    int countGoodNodes(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<vector<int>> adj(n);
        vector<int> subtree_size(n,1);
        
        for(auto& edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        function<void(int, int)> dfs = [&](int node, int parent) {
            for(int child : adj[node]) {
                if(child == parent){
                    continue;
                }
                dfs(child, node);
                subtree_size[node] += subtree_size[child];
            }
        };
        
        dfs(0, -1);
        
        int good_nodes = 0;
        
        function<void(int, int)> count_good = [&](int node, int parent){
            unordered_set<int> sizes;
            for(int child : adj[node]){
                if(child == parent) continue;
                sizes.insert(subtree_size[child]);
            }
            if(sizes.size() <= 1){
                good_nodes++;
            }
            for(int child : adj[node]){
                if(child != parent){
                    count_good(child, node);
                }
            }
        };
        
        count_good(0, -1);
        return good_nodes;
        
    }
};