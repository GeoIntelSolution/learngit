#include<bits/stdc++.h>
using namespace std;
const int maxn =500000+1;
bool notprime[maxn];
int  a[50];//不小于r
int n,k;
int arr[30];
bool b[30];
int xx =0;

void SeiveOfEothones(){
   for(int k=2;k<maxn;k++){
       if(!notprime[k]){
           for(int j=2;j*k<maxn;j++){
               notprime[j*k]=true;
           }
       }
   } 
}

bool isPrime(int i){
    return !notprime[i];
}


void dfs(int step){
    if(step>k){
        int sum=0;
        for(int i= 1; i<=3;i++) sum+=arr[a[i]];
        // cout<<"sum:"<<sum<<"\n";
        if(isPrime(sum)){
            xx++;
        }
        return;
    }

    for(int i=1;i<=n;i++){
        if(!b[i]&&i>a[step-1]||step==1){
            a[step]=i;
            b[step]=true;
            dfs(step+1);
            a[step]=0;
            b[step]=false;
        }
    }


}


int main(){
    SeiveOfEothones();
    // for(int i = 2; i<10;i++)
        // cout<<i<<" "<< isPrime(i)<<"\n";
    cin>>n>>k;
    for(int i =1 ; i<=n ;i++){
        cin>>arr[i];
    }

    dfs(1);

    cout<<xx<<endl;
    return 0;

}