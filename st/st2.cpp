#include<bits/stdc++.h>
using namespace std;
#define fore(i,l,r) for(int i=l;i<r;i++)
const int maxn =1000;
int gcd_set[maxn][15];
int arr[maxn];
int n;

void buildSparseTable(int* arr,int n){
    //计算表的宽度
    int p=floor(log2(n));

    //第一列
    fore(i,0,n){
        gcd_set[i][0]=arr[i];
    }

    fore(k,1,p){
        for(int j=0;j+(1<<k)<=n;j++){
            gcd_set[j][k]=__gcd(gcd_set[j][k-1],gcd_set[j+(1<<(k-1))][k-1]);
        }
    }    

}

int query(int l,int r){
    int len =r-l+1;
    int mp = floor(log2(len));
    int left=gcd_set[l][mp];
    int right=gcd_set[r-(1<<mp)+1][mp];
    cout<<left<<":"<<right<<"\n";
    return __gcd(left,right);
}
int main(){
    int q;
    cin>>n>>q;
    fore(i,0,n) cin>>arr[i];
    buildSparseTable(arr,n);
    fore(i,0,q){
        int l,r;
        cin>>l>>r;
        cout<<query(l,r)<<"\n";
    }
}