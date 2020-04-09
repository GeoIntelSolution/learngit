#include<bits/stdc++.h>
using namespace std;

const int MAXN=10000+3;
struct Edge{
    int to,len;
    Edge(int a,int b):to(a),len(b){}
};
vector<Edge> G[MAXN];
bool vis[MAXN];


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no,len,x;
        cin>>no>>len;
        while (cin>>x&&x)
        {
            G[x].push_back(Edge(no,len));
        }
    }

    for(int i=1;i<=n;++i){
        dfs(i);
    }
    return 0;
}