#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.insert(s);
    }
    cout<<v.size()<<"\n";
    return 0;
}