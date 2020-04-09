#include<bits/stdc++.h>
using namespace std;
int n,k ,t;
int res[50];
bool vis[50];
void dfs(int step){
    if(step>k){
        for(int i=1;i<=k;i++){
            cout<<res[i]<<" ";
        }
        cout<<"\n";
        return;
    }

    for(int i = 1; i<=n;i++){
        if((!vis[i]&&i>res[step-1])||step==1){
            res[step]=i;
            vis[step]=true;
            dfs(step+1);
            res[step]=0;
            vis[step]=false;
        }
    }

}


void search(int t){
    if(t>n){
        for(int i =1 ;i<=n;i++){
            cout<<res[i]<<" ";
        }
        cout<<"\n";
        return;
    }

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            res[t]=i;
            vis[i]=true;
            search(t+1);
            res[t]=0;
            vis[i]=false;
        }
    }

}
int main(){
    cin>>n>>k;
    dfs(1);
    cin.get();

    search(1);
    return 0;
}
