#include<bits/stdc++.h>
using namespace std;
const int maxn =5000+1;
pair<int,int> arr[maxn];

bool compare(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second){
        return a.second>b.second;
    }

    return a.first<b.first;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int code,v;
        cin>>code>>v;
        arr[i]={code,v};
    }
    sort(arr,arr+n,compare);
    int x=(int)floor(m*1.5);
    int socre=arr[x-1].second;
    while (arr[x].second==socre)
    {
        x++;
    }

    cout<<socre<<" "<<x<<"\n";
    for(int i= 0;i <x;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
    
}