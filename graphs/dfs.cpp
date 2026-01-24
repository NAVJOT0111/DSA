#include <bits/stdc++.h>
using namespace std;

void dfsRec(int u, int vector<vector<int>> &adj, vector <int> &visited, vestor <int> &res){
    visited[u] = 1;
    res.push_back(u);

    for(v : adj[u]){
        if(!visited(v)){
            dfsRec(v, adj, visited, res);
        }
    }
}

vector <int> dfs(vector<vector<int>> &adj){
    int n = adj.size();
    vector <int> visited(n,0);
    vector <int> res;

    dfs(0, adj, visited, res);
    return res;
}