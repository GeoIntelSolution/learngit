#include<iostream>
#include<stdio.h>
#define myTest
using namespace std;
#define fore(i,l,r) for(int i= l ; i <=r ;i++)
int main(){

#ifdef myTest
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
    int n;
    cin>>n;
    fore(i,1,n){
        cout<<i<<" ";
    }
    return 0;
}
