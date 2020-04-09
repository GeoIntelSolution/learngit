#include<bits/stdc++.h>
using namespace std;
const int maxn=100000+3;
typedef long long ll;
ll arr[maxn];
ll n,k;
bool check(ll mid){
    // cout<<mid<<endl;
    ll res=0;
    for(int i=0;i<n;++i){
        res+=(arr[i]/mid);
    }

    // if(res<k){
    //     return -1;
    // }else
    // {
    //     return 1;
    // }
    // cout<<"res"<<res<<endl;
    return (res>=k);
}


int main(){
    cin>>n>>k;
    ll maxh = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxh=max(maxh,arr[i]);
    }    
    ll minh =1;
    ll lastone=0;
    while (minh<=maxh)
    {
        ll mid = (maxh-minh)/2+minh;
        // cout<<"mid is"<<mid<<"\n";
        if(mid==0) break;
        if(check(mid)){
            lastone=mid;
            minh=mid+1;
        }else{
            maxh=mid-1;
        }   

    }
    
    cout<<lastone<<"\n";
    return  0;
}