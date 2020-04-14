#include<bits/stdc++.h>
using namespace std;
const int maxn= 20000+1;
int arr[maxn];
// 2000000007
// 2147483647
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,h;
    cin>>n>>h;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    int j=0;
    while (h>0)
    {
        h-=arr[j];
        j++;
    }
    
    cout<<(j)<<"\n";

}
