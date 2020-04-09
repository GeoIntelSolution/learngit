#include<bits/stdc++.h>
using namespace std;
const int maxn =200000+3;
int arr[maxn];
 int n;
 typedef long long ll;
int search(int x,int l,int r){
   int c =0;
   while(l<=r){
       int m =(r-l)/2+l;
       if(arr[m]>x){
           r=m-1;
       }else if(arr[m]<x){
           l=m+1;
       }else{
           int t=m;
           while (arr[m]==x&&m<n) m++;
           c=m-t;
        //    cout<<"cccc"<<c<<"\n";
           m=t;
           while (arr[m]==x&&m>=0) m--;
        //    cout<<"m"<<m<<endl;
           c+=t-m-1;//重叠-1;
        //    cout<<"cccc"<<c<<"\n";
           return c;
       }
   } 

   return c;
}

map<int,int> v;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int c;
    cin>>n>>c;
    for(int i =0 ; i<n;i++){
        cin>>arr[i];
        v[arr[i]]++;
    }
    sort(arr,arr+n);
    ll res=0L;
    for(auto it= v.begin();it!=v.end();++it){
        // cout<<"item"<<it->first<<";"<<it->second<<endl;
        // cout<<"find"<<(it->first-c)<<"count"<<search(it->first-c,0,n-1)<<"\n";
        res+=1LL*(it->second)*search(it->first-c,0,n-1);
    }
    cout<<res<<endl;
    return 0;
}