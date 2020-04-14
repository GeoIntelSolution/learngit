#include<bits/stdc++.h>
using namespace std;
char ch[20]="0123456789ABCDEFGHI";
inline void  opt(int x,int n){
    if(!x) return;
    int t=x/n;
    int m=x%n;
    if(m<0){
        t+=1;
        m-=n;
    }
    opt(t,n);
    putchar(ch[m]);
}

void calc(int n,int m){
    // cout<<n<<":"<<m<<"\n";
    opt(n,m);
}

int main(){
    // int tc;
    // cin>>tc;
    // while(tc--){
        int n,m;
        cin>>n>>m;
        cout<<n<<"=";
        calc(n,m);
        cout<<"(base"<<m<<")"<<endl;
    // }
    return 0;
}