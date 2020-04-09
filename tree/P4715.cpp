#include<bits/stdc++.h>
using namespace std;
const int maxn =1<<7+1;
pair<int,int> arr[maxn];

bool compare(const pair<int,int> i1,const pair<int,int> i2) {
    return i1.first<i2.first;
}

int main(){
    int n,t;
    cin>>n;
    n=(1<<n);
    for(int i=0;i<n;i++) {
        cin>>t;
        arr[i]=make_pair(t,i+1);
    }
    
    int sz =n;
    while(sz>2){
        for(int i=0;i<sz;i+=2){
            arr[i/2]=compare(arr[i],arr[i+1])?arr[i+1]:arr[i]; 
        }   
        sz>>=1;
    }

    cout<<(compare(arr[0],arr[1])?arr[0].second:arr[1].second)<<endl;
    return 0;
}