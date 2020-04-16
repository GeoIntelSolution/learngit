#include<bits/stdc++.h>
using namespace std;
const int maxn=2000000;
int arr[maxn];
int main(){
    int n,m;
    cin>>n>>m;
    int i=1;
    while (i<=n)
    {
      cin>>arr[i];
      if(i<m) cout<<0<<"\n";
      else {
          int v=arr[i];
          cout<<"v"<<v<<"\n";
          for(int j=i;j>i-m;j--){
              v=min(v,arr[j]);
          }
          cout<<v<<"\n";
      }
      i++;
    }
    
    return 0;
}