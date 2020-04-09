#include<bits/stdc++.h>
using namespace  std;

inline
void solve(int a,int b,int k){
    int mod=1;
    while(k--) mod*=10;
    if((a%mod)==(b%mod)){
        cout<<-1<<endl;
    }    
    else cout<<a+b<<"\n";
}

int main(){
    int a,b,k;
    cin>>a>>b;
    
    while (a||b)
    {
        cin>>k;
        solve(a,b,k);
        cin>>a>>b;
    }
    
    return 0;
}