#include<bits/stdc++.h>
using namespace std;
const int maxn =13+1;
int n;
int tot=0;
int show=0;
int col[maxn],ans[maxn];

bool CHECK(int r,int c){
    for(int i=0;i<r;i++){
        if(col[i]==c||abs(i-r)==abs(c-col[i])) return false;
    }
    return true;
}
void dfs(int s){
    if(s==n+1){
        tot++;
        show++;
        if(show<=3){
            for(int i=1;i<=n;i++){
                cout<<col[i]<<" ";
            }
            cout<<"\n";
        }
        return ;
    }

    for(int i=1;i<=n;i++){
        if(CHECK(s,i)){
            col[s]=i;
            dfs(s+1);
        }
    }

}

int main(){
    cin>>n;
    dfs(1);
    cout<<tot<<"\n";
    return 0;
}