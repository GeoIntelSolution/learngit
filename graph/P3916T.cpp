#include<bits/stdc++.h>
using namespace std;
const int maxn =100000+3;
int n,m,arr[maxn];
vector<int> G[maxn];

void dfs(int x,int d){
    if(arr[x]) return; //visited
    arr[x]=d;
    for(int i=0;i<G[x].size();i++){
        dfs(G[x][i],d);
    }
}

int main(){
    int u,v;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        G[v].push_back(u);//reverse edges
    }

    for(int i=n;i;i--) dfs(i,i);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}