#include <bits/stdc++.h>
using namespace std;

bfs(vector<vector<int>> &adj){
    int n = adj.size();
    vector<int> visited(n,0);
    vector <int> res;

    queue<int> q;

    q.push(0);
    visited[0] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        res.push_back(u);

        for(v:adj[u]){
            if(!visited[v]){
                visited[v] = 1;
                q.push(v);
            }
        }
    }
    return res;
}