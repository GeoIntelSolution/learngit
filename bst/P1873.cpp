#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn  =1000000+3;
ll arr[maxn];
ll m,n;

int check(int c){
    ll res=0;
    for(int i=0;i<n;i++){
        if(arr[i]>c){
            res+=arr[i]-c;
        }
    }
    // cout<<res<<"is"<<endl;
    if(res>m){
        return 1;
    }else if(res<m){
        return -1;
    }else {
        return 0;
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    ll maxh =INT_MIN;
    ll minh=0;
    ll lastequal=0;
    for(int i=0;i<n;++i) {cin>>arr[i];  maxh =max(arr[i],maxh); }
    while(minh<=maxh){
        int mid  =(maxh-minh)/2+minh;
        // cout<<mid<<"hello"<<minh<<"\n";
        int t=check(mid);
        // cout<<t<<"\n";
        if(t==-1){
            maxh=mid-1;
        }else if(t==0){
            cout<<mid<<" ";
            return 0;
        }else {
            minh=mid+1;
            lastequal=mid;
        }

    }

    // cout<<"here"<<lastequal<<endl;
    cout<<lastequal<<endl;
    return 0;
    
   
}
