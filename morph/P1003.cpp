#include<bits/stdc++.h>
using namespace std;
const int maxn=10000+1;
int arr[maxn][maxn];
int n;
 
void printArr();
inline void calc(int a,int b,int g,int k,int mark){
    // (a,b)=>(g,k);
    a=min(a,n);
    g=min(a+g,n);

    b=min(b,n);
    k=min(b+k,n);
    // cout<<"("<<a<<","<<b<<")";
    // cout<<"("<<g<<","<<k<<")\n";
    if(a==g&&b==k) return;

    for(int i=a;i<g;++i){
        for(int j=b;j<k;++j){
            arr[i][j]=mark;
        }
    }

    // printArr();

} 

void printArr(){
    for(int i=0;i<=n;++i){
        for(int j=0;j<=n;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,b,g,k;
        cin>>a>>b>>g>>k;
        calc(a,b,g,k,i);
    }

    int  x,y;
    cin>>x>>y;
    cout<<(arr[x][y]==0?-1:arr[x][y])<<"\n";
}