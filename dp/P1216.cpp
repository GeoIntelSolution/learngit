#include<bits/stdc++.h>
using namespace std;
#define foreq(i,l,r) for(int i=l;i<=r;i++)
const int maxn=1000+1;
int arr[2][maxn];
int main(){
    int r;
    cin>>r;
    foreq(i,1,r){
        foreq(j,1,i){
           int t;
           cin>>t;
        
            // w arr[1] r arr[2];
            if(j==1) arr[i%2][j]=arr[(i+1)%2][j]+t;
            else if (j==i) arr[i%2][j]=arr[(i+1)%2][j-1]+t;
            else arr[i%2][j]=max(arr[(i+1)%2][j],arr[(i+1)%2][j-1])+t;

        }
        // foreq(j,1,i){
        //     cout<<arr[i%2][j]<<" ";
        //     if(j==i) cout<<endl;
        // }
    }

    int m=INT_MIN;
    foreq(j,1,r){
       m=max(m,arr[r%2][j]);
    }
    cout<<m<<"\n";
    
}