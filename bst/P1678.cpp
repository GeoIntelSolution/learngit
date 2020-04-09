#include<bits/stdc++.h>
using namespace std;

int n,m,t;
const int  maxn =100000;
int arr[maxn];
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>m>>n;
    for(int i=0;i<m;i++) cin>>arr[i];
    sort(arr,arr+m);
    ll res=0;
    // for_each(arr,arr+m,[](int v){cout<<v<<" ";});
    // cout<<endl;
    while (n--)
    {
        cin>>t;
        int l=lower_bound(arr,arr+m,t)-arr;
        // cout<<l<<"\n";
        if(l==m){
            res+=abs(t-arr[l-1]);
        }else if(l==0){
            res+=abs(t-arr[l]);
        }else if(abs(arr[l]-t)>abs(t-arr[l-1])){
            res+=abs(arr[l-1]-t);
        }else{
            res+=abs(arr[l]-t);
            // cout<<"abs"<<res<<"\n";
        }

    }
    cout<<res<<endl;
    
    return 0;
}