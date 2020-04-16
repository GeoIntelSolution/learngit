#include<bits/stdc++.h>
using namespace std;
const int maxn=100000+1;
int arr[maxn];
char color[maxn];
void init_set(int n){
    for(int i=1;i<=n;++i){
        cin>>color[i];
        arr[i]=i;
    }   
}

int find_set(int x){
    arr[x]=(x==arr[x])?x:find_set(arr[x]);
    return arr[x];
}

void union_set(int u,int v){
    int x =find_set(u);
    int y =find_set(v);
    //颜色相同的进入其中
    if(x!=y&&color[x]==color[y])arr[x]=y;
}

int main(){
    int n,m;
    cin>>n>>m;
    init_set(n);
    for(int i=1;i<=n-1;++i)
    {
        int u,v;
        cin>>u>>v;
        union_set(u,v);
    }
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        char ch;
        cin>>ch;
        // cout<<a<<" "<<b<<","<<ch<<" ";
        // cout<<color[a]<<endl; 
        if(find_set(a)==find_set(b)&&ch!=color[a]) cout<<"0";
        else cout<<"1";
    }

    return 0;
}