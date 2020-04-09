#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n ,m ;
    cin>>n>>m;
    int count= 0;
    int l = min(m,n);
    ll all=m*(m+1)/2;
    // cout<<all<<endl;
    all*=n*(n+1)/2;
    // cout<<all<<endl;
    ll sq=0;
    for(int i=1;i<=l;i++){
        sq+=(n-i+1)*(m-i+1);
    }

    cout<<sq<<" "<<(all-sq)<<"\n";

}