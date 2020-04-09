#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull arr[10010];
int ans=1;
const int prime=233317,mod=19260817;
ull hashs(string s){
    int len =s.size(),seed=31;
    ull ans=0;
    for(int i=0;i<len;i++){
        ans=(ans*31+(ull)s.at(i))%mod+prime;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr[i]=hashs(s);
    }

    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1])
            ans++;
    }

    // for_each(arr,arr+n,[](int val){cout<<val<<" ";})  ;
    // cout<<endl;  
    cout<<ans<<"\n";

}