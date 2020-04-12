#include<bits/stdc++.h>
using namespace std;
int n,k;
const int maxn= 1000000+3;
typedef long long ll;
ll arr[maxn],prefixsum[maxn];
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    ll ans=0;
    for(int i=1;i<n;i++){
        cin>>arr[i];
        prefixsum[i]=arr[i]+prefixsum[i-1];
    }
    ll m =LONG_MAX;
    for(int i=1;i<n-k+1;++i){
       ll t=prefixsum[i+k-1]-prefixsum[i-1]; 
    //    i,i+k的和
    //    for(int j=i;j<(i+k)&&j<len;j++){
    //        t=t-arr[j];
    //    }
       m=min(m,prefixsum[n-1]-t);     
    }

    cout<<(m)<<"\n";

    return 0;
}