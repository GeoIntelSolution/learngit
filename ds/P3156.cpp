#include<bits/stdc++.h>
using namespace std;
#define fore(i,l,r) for(int i=l;i<r;i++)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,t;
    cin>>n>>m;
    vector<int> v;
    fore(i,0,n){
        cin>>t;
        v.push_back(t);
    }

    fore(i,0,m){
        cin>>t;
        cout<<v[t-1]<<"\n";
    }
}