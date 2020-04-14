#include<bits/stdc++.h>
using namespace std;
string arr[20+1];
bool compare(string &s1,string &s2){
    // int l=min(s1.size(),s2.size());
    // for(int i=0;i<l;i++){
    //     if(s1[i]!=s2[i]){
    //         return s1[i]>s2[i];
    //     }
    // }

    // return s1.size()<s2.size();
    return s1+s2>s2+s1;
}

int main(){
    // string  s1="7777";
    // string  s2="77";
    // cout<<compare(s1,s2)<<endl;
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];    
    sort(arr,arr+n,compare);
    for(int i=0;i<n;++i){
        cout<<arr[i];
    }

}