#include<bits/stdc++.h>
using namespace std;
int n,m,hx,hy;
long long state[21][21];

int xx =0;

bool isInHorse(int i ,int j){
    if(i==hx&&j==hy){
        return  true;
    }

    if(abs(i-hx)==2&&abs(j-hy)==1){
        return true;
    }

     if(abs(i-hx)==1&&abs(j-hy)==2){//错误写成 j-hx==1&& i-hy==2;
        return true;
    }

    return false;

}

void Calc(){
    // memset(state,0,sizeof(int)*21*21);
    for(int i=n;i>=0;--i){
        for(int j=m;j>=0;--j){
            if(isInHorse(i,j)){
                // cout<<i<<":"<<j<<endl;
                state[i][j]=0;
            }else if(i==n&&j==m){
                state[i][j]=1;
            } else   if(j==m){
                state[i][j]+=state[i+1][j];
            }else  if(i==n){
                state[i][j]+=state[i][j+1];
            }else{
                state[i][j]=state[i+1][j]+state[i][j+1];
            }
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=m;j++){
    //         cout<<setw(10)<<state[i][j];
    //     }
    //     cout<<"\n";
    // }    
    cout<<state[0][0]<<"\n";
}

int main(){
    cin>>n>>m>>hx>>hy;
 
        Calc();
    return 0;
}