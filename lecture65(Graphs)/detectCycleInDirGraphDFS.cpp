#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Graph{
    int V;
    list<int> *l;
    public: 

    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
    }
    bool isCycleDirDFS(int src, vector<bool>& vis, vector<bool>& recStack){
        vis[src] = true;
        recStack[src] = true;

        for(int v : l[src]){
            if(!vis[v]){
                if(isCycleDirDFS(v, vis, recStack)){
                    return true;
                }
            } else if(recStack[v]){
                return true;
            }
        }

        recStack[src] = false;
        return false;
    }

    bool isCycle(){
        vector<bool> vis(V, false);
        vector<bool> recStack(V, false);

        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(isCycleDirDFS(i, vis, recStack)){
                    return true;
                }
            }
        }

        return false;
    }

};


int main(){
    Graph g(4);

    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);

    cout << g.isCycle() << endl;

    return 0;
}

