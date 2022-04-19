#include<bits/stdc++.h>
using namespace std;

// In this case the dfs call return the subtree size of every node;
// we can add child's subtree size and 1 to get the subtree size of  parent node;
// Time : O(n)

int dfs(int node){
    vis[node]=1;
    int cur_size =1;
    for(auto child : adj[node])
    {
        if(!vis[child]) cur_size += dfs(child);
    }
    SubSize[node] = cur_size;
    return cur_size;
}
