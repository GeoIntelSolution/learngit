#include<bits/stdc++.h>
using namespace std;
int n;
int times=0;
int total = 0;
int ans[13+1];

bool check(int r,int c){
    //(r,c)  (i,ans[i])
    for(int i=0;i<r;i++){
        if(c==ans[i]||abs(r-i)==abs(c-ans[i]))
            return false;
    }
    return true;
}
void dfs(int r){
    int i;
    if(r==n){
        total++;
        times++;
        if(times<=3){
            for(int i=0;i<r;i++){
                cout<<(ans[i]+1)<<" ";
            }
            cout<<"\n";
        }
        return;
    }

    for(i=0;i<n;i++){
        if(check(r,i)){
            ans[r]=i;
            dfs(r+1);
            ans[r]=0;
        }
    }

}

int main(){
    cin>>n;
    dfs(0);
    cout<<total<<endl;
    return 0;
}