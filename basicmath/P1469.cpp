#include<bits/stdc++.h>
using namespace std;

inline void read(int &x){
    x=0;char c=getchar();
    while(c<'0'||c>'9') c=getchar();
    while (c>='0'&&c<='9') x=x*10+c-'0',c=getchar();
     
}
int main(){
    // cout<<(10000001<INT_MAX)<<endl;
    int n;
    read(n);
    // cout<<n<<"\n";
    int ans=0,t=0;
    for(int i=1;i<=n;i++){
        read(t);
        // cout<<t<<" ";
        ans^=t;
        // cout<<ans<<" ";
    }
    printf("%d\n",ans);
    return 0;
}