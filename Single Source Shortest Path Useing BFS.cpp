// visit every level from the source and increase current node distance by one from the root.

vll adj[10005];
ll vis[100005],dis[100005];

void bfs(ll src){
    queue<ll> q;
    q.push(src);

    vis[src] = 1; dis[src]=0;
    while(!q.empty()){
        ll cur = q.front();
        q.pop();
        for(auto child:adj[cur]){
            if(vis[child]==0)
            {
                q.push(child);
                dis[child]=dis[cur] + 1;
                vis[child] =1;
            }
        }
    }

}

