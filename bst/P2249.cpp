#include<bits/stdc++.h>
using namespace std;
int arr[1000000+3];

void search(int l,int r,int k)
{
    while(l<=r){
        int m=(r-l)/2+l;
        if(arr[m]<k){
            l=m+1;
        }else if(arr[m]>k){
            r=m-1;
        }else if(arr[m]==k){
           while(arr[m]==k) m--;
           cout<<(m+1)<<" ";
            return;
        }
    }
    cout<<-1<<" ";
    return;
}

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>arr[i];
    // cout<<"\n";
    int q;
    for(int i=1;i<=m;i++){
        cin>>q;
        search(0,n-1,q);
    }
    return 0;
}