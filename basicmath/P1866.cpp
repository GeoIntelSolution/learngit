#include<bits/stdc++.h>
using namespace std;
const int maxn=1000000007;
typedef long long ll;
int ans=1;


inline int modMultiply(ll n,ll m){
    cout<<n<<":"<<m<<endl;
    // n=(1LL*((n%maxn)*(m%maxn)))%maxn;
    ll t=(ll)(1L*n*m)%maxn;
    // cout<<t<<"\n";
    return t;
}


int main(){
    int n;
    cin>>n;
    int m=INT_MIN;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        m=max(m,t);
        ans=modMultiply(ans,m-i+1);
    }
    cout<<ans<<"\n";  
}