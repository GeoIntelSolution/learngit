#include<bits/stdc++.h>
using namespace std;
#define fore(i,l,r) for(int i = l;i<=r;i++)
const int maxn=5000;
int arr[maxn];

void printarr(int n){
    fore(i,1,n) cout<<arr[i]<<" ";
    cout<<"\n";
}
void init_set(int n){
    fore(i,1,n){
        arr[i]=i;
    }
    // printarr(n);
}



int find_set(int x){
    return x==arr[x]?x:find_set(arr[x]);
}

void union_set(int x,int y){
    int l  =find_set(x);
    int r  =find_set(y);
    // cout<<"update"<<l<<":"<<r<<"\n";
    if(l!=r) arr[l]=r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m,p;
    cin>>n>>m>>p;
    init_set(n);
    int rx,ry;
    fore(i,1,m){
        // cout<<"i"<<i<<endl;
        cin>>rx>>ry;
        union_set(rx,ry);
        // printarr(n);
    }

    fore(j,1,p){
        cin>>rx>>ry;
        if(find_set(rx)==find_set(ry)){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }


}