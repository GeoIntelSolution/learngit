#include<bits/stdc++.h>
using namespace std;

vector<char> G[100];
bool vis[100];

void dfs(int x){
    if(vis[x]) return;
    cout<<(char)(x+'a')<<" ";
    vis[x]=true;
    for(int i=0;i<G[x].size();++i){
        if(!vis[G[x][i]-'a']){
            dfs(G[x][i]-'a');
            vis[G[x][i]-'a']=true;
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        char u,v;
        cin>>u>>v;
        G[u-'a'].push_back(v);
    }

    for(int i=0;i<n;i++) dfs(i);
    return 0;
}