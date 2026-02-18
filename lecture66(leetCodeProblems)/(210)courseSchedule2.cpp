class Solution {
public:
    bool dfs(int src, vector<bool>& vis, vector<bool>& recStack, vector<list<int>>& adjList, stack<int>& s){

        vis[src] = true;
        recStack[src] = true;

        for(int v : adjList[src]){
            if(!vis[v]){
                if(dfs(v, vis, recStack, adjList, s)){
                    return true;
                }
            } else if(recStack[v]){
                return true;
            }
        }

        recStack[src] = false;
        s.push(src);

        return false;
    }
    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        // convert prerequisites to adjency list
        vector<list<int>> adjList(n);
        for(int i = 0; i < edges.size(); i++){
            int v = edges[i][0];
            int u = edges[i][1];

            adjList[u].push_back(v);
        }

        // now create prerequsites for dfs function
        vector<int>finalOrder;  // for return purposes if we need to return empty;

        vector<bool> vis(n, false);
        vector<bool> recStack(n, false);
        stack<int> depStack;

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                if(dfs(i, vis, recStack, adjList, depStack)){
                    return finalOrder;   // empty array.
                }
            }
        }

        while(depStack.size() > 0){
            finalOrder.push_back(depStack.top());
            depStack.pop();
        }

        return finalOrder;

    }
};