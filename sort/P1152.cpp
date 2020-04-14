#include<bits/stdc++.h>
using namespace std;
const int maxn=1000+1;
int arr[maxn];
bool vis[maxn];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int prev;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if(i==0) continue;
        else {
            // cout<<"v"<<(arr[i]-arr[i-1])<<endl;
            int  t=abs(arr[i]-arr[i-1]);
            if(t<=1000){
                vis[t]=true;
            }
        }
    }

    for(int i=1;i<=n-1;i++){
        // cout<<i<<":"<<vis[i]<<" ";
        if(!vis[i]){
            cout<<"Not jolly\n";
            return 0;
        }
    }

    cout<<"Jolly\n";



}