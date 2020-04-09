#include<bits/stdc++.h>
using namespace std;
const int MAXN=100000+3;
vector<int> G[MAXN];
int arr[MAXN];
bool vis[MAXN];
int n,m;
void dfs(int v,int &m){
    if(!vis[v]){
        m=max(m,v);
        vis[v]=true;
    }
    for(int i=0;i<G[v].size();++i){
        if(!vis[G[v][i]]){
            dfs(G[v][i],m);
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u ,v;
        cin>>u>>v;
        G[v].push_back(u);
    }

    for(int i=1;i<=n;i++){
        int m=INT_MIN;
        memset(vis,0,n+1);
        dfs(i,m);
        arr[i]=m;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}