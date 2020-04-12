#include<bits/stdc++.h>
using namespace std;
const int maxn=100000+3;
int arr[maxn],brr[maxn];

struct node{
    int a,b,c;
    node(int x,int y,int z):a(x),b(y),c(z){}
};

node* price[maxn];


void swap(int &x,int &y){
    int t=x;
    x=y;
    y=t;
}

inline void mark(int s,int e){
    if(s>e) swap(s,e);
    cout<<(s-1)<<":"<<(e-1)<<endl;
    for(int i=s-1;i<e-1;i++){
        brr[i]++;
    }

  
}

void print(int len){
    cout<<"brr";
    for(int i=0;i<len;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
}

typedef long long ll;
int main(){
    int n,m;
    cin>>n>>m;
    int len =n-1;
    for(int i=0;i<m;i++) cin>>arr[i];

    for(int i=0;i<len;++i){
        int a,b,c;
        cin>>a>>b>>c;
        price[i]=new node(a,b,c);
    }

    //计算经过一条路几次
    int start =arr[0];
    for(int i=1;i<len;i++){
        mark(start,arr[i]);
        print(len);
        start=arr[i];
    }


    //计算价值
    ll ans=0;
    for(int i=0;i<len;i++){
        int origin =price[i]->a*brr[i];
        int discount =price[i]->b+price[i]->c*brr[i];
        cout<<i<<":"<<origin <<"--"<<discount<<"\n";
        ans+=origin>discount?discount:origin;
    }

    cout<<ans<<"\n";
    return 0;
}
