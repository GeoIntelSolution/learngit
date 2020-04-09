#include<bits/stdc++.h>
using namespace std;

const int maxn =1e5+1;
map<pair<int,int>,int > v;
int main(){
    int n ,q;
    cin>>n>>q;
    int o,i,j,k;
    while(q--){
        cin>>o;
        if(o==1){
            cin>>i>>j>>k;
            v[{i,j}]=k;
        }else{
            cin>>i>>j;
            auto it=v.find({i,j});
            if(it!=v.end()){
                cout<<it->second<<"\n";
            } 
        }
    }
}