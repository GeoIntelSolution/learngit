#include<bits/stdc++.h>
using namespace std;
int fa[100010],ans[100010],M,N;
char col[100010];
int find(int x){
    if(x==fa[x]) return x;
    return fa[x]=find(fa[x]);
}

void merge(int x,int y){
    fa[find(x)]=fa[find(y)];
}

int main(){
    int cnt=0;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>col[i];
        fa[i]=i;
    }

    for(int i=1;i<=n-1;i++){
        int u,v;cin>>u>>v;
        if(col[u]==col[v]) merge(u,v);
    }

    for(int i=1;i<=m;++i){
        int a,b;cin>>a>>b;
        char c;cin>>c;
        if(find(a)==find(b)&&col[a]!=c) ans[++cnt]=0;
        else ans[++cnt]=1;
    }

    for(int i=1;i<=cnt;i++) cout<<ans[i];
    return 0;
}


// node lca(node root,node n1 ,node n2){
//     if(root==null) return null;
//     if(root==n1&&root==n2) return root;
//     node left =lca(root->left,n1,n2);
//     node right=lca(root->right,n1,n2);
//     if(left!=null&&righ!=null) return root;
//     if(left==null&&right==null) return null;

//     return left==null?left:right;
// }