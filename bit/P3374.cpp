#include<bits/stdc++.h>
using namespace std;
const int maxn=500000+1;
int arr[maxn];
int n,m;
#define fore(i,l,r) for(int i=l;i<r;i++)
#define low_bit(x) ((x)&(-x))
void add(int x,int d){
    while (x<=n)
    {
        arr[x]+=d;
        x+=low_bit(x);
    }
}

int sum(int x){
    int sum = 0; 
    while (x>0)
    {
        sum+=arr[x];
        x-=low_bit(x);
    }
    return sum;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    fore(i,1,n+1){
        int t;
        cin>>t;
        add(i,t);
    }
    fore(i,0,m){
        int op,x,y;
        cin>>op>>x>>y;
        if(op==1){
            add(x,y);
        }else{
            cout<<(sum(y)-sum(x-1))<<"\n";
        }
    }
}