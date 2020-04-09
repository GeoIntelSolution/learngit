#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
  vector<int> v;
int main(){
    int n,m,t;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }

    for(int i=0;i<m;i++){
        cin>>t;
        int l=lower_bound(v.begin(),v.end(),t)-v.begin();
        if(v[l]!=t){
            cout<<-1<<" ";
        }else{
            cout<<(l+1)<<" ";
        }
    }
    return 0;
}