#include<bits/stdc++.h>
using namespace std;
int cols[5],A[60+1];
int total=0;
int minv=INT_MAX;
int l=0,r=0;
void dfs(int s,int n){
    if(s==n){
        minv=min(minv,max(l,r));
        // cout<<"cur i"<<minv<<"\n";
        // cout<<total<<endl;
        return;
    }
    l+=A[s];
    dfs(s+1,n);
    l-=A[s];
    r+=A[s];
    dfs(s+1,n);
    r-=A[s];
}

void solve(int n){
    dfs(0,n);
}

int main(){
   int i ;
   for(i=0;i<4;i++) cin>>cols[i];
   for(i=0;i<4;i++){
      int j;
      l=r=0;
      minv=INT_MAX;
      for(j= 0 ; j <cols[i];j++){
          cin>>A[j];
      }

      solve(j);
      total+=minv;  
   }

   cout<<total;
}