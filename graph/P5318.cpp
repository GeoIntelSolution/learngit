#include<bits/stdc++.h>
using namespace std;
const int MAXN=100000+3;
bool vis[MAXN];
vector<int> G[MAXN];
int n,m;
void dfs(int x,int s){
    if(s==n) return;
    vis[x]=true;
    cout<<x<<" ";
    for(int i=0;i<G[x].size();++i){
        if(!vis[G[x][i]]){
            dfs(G[x][i],s+1);
        }
    }
}

void bfs(int x){
    memset(vis,0,n+1);
    queue<int> qlist;
    qlist.push(x);
    vis[x]=true;
    while (!qlist.empty())
    {
        int a=qlist.front();
        cout<<a<<" ";
        qlist.pop();
        for(int i= 0; i<G[a].size();i++){
            if(!vis[G[a][i]]){
                qlist.push(G[a][i]);
                vis[G[a][i]]=true;
            }
        }
    }
    
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
    }

    for(int i=1;i<=n;i++){
        sort(G[i].begin(),G[i].end());
    }
    dfs(1,0);
    cout<<"\n";
    bfs(1);
    return 0;
}