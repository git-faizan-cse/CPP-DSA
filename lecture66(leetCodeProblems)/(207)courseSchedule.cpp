class Solution {
public:

    bool isCycleDirDFS(int src, vector<list<int>>& adjList, vector<bool>& vis, vector<bool>& recStack){
        vis[src] = true;
        recStack[src] = true;

        for(int v : adjList[src]){
            if(!vis[v]){
                if(isCycleDirDFS(v, adjList, vis, recStack)){
                    return true;
                }
            }else if(recStack[v]){
                return true;
            }
        }

        recStack[src] = false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<list<int>> adjList(numCourses);
        for(int i = 0; i < prerequisites.size(); i++){
            int v = prerequisites[i][0];
            int u = prerequisites[i][1];

            adjList[u].push_back(v);
        }

        vector<bool> vis(numCourses, false);
        vector<bool> recStack(numCourses, false);

        for(int i = 0; i < numCourses; i++){
            if(!vis[i]){
                if(isCycleDirDFS(i, adjList, vis, recStack)){
                    return false;
                }
            }
        }

        return true;
    }
};