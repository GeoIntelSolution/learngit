#include<bits/stdc++.h>
using namespace std;

int arr[10];

inline 
void signbits(int x){
    while(x){
        arr[x%10]++;
        x/=10;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int k1,k2,k3;
    bool ans=true,total =true;
    for(int k =1; k<=1000/c;k++){
        k1=a*k;
        k2=b*k;
        k3=c*k;
        signbits(k1);
        signbits(k2);
        signbits(k3);
        ans=true;
        for(int i=1;i<10;i++){
            if(arr[i]!=1){
                ans=false;
                break;
            }
        }
        memset(arr,0,sizeof(arr));
        if(ans){
            cout<<k1<<" "<<k2<<" "<<k3<<"\n";
            total=false;
        }
    }

    if(total){
        cout<<"No!!!";
    }
}