#include<bits/stdc++.h>
using namespace std;
const int maxn =200000;

int arr[maxn];
typedef long long ll;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans =LONG_MIN,prefix=0;
    for(int i=0;i<n;i++){
        if(prefix<0){
            prefix=arr[i];
        }else{
            prefix+=arr[i];
        }
        ans=max(ans,prefix);
    }
    cout<<ans;
    return 0;
}