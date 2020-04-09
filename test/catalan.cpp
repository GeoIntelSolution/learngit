#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll catalan(int n){
    ll res=0;
    if(n<=1) return 1LL;

    for(int i=0;i<n;i++){
        res+=catalan(i)*catalan(n-i-1);
    }
    return res;
}

ll t[20];

ll catalan2(int n){
    t[0]=1;
    t[1]=1;
    if(n<=1) return t[n];
    for(int i=2;i<=n;i++){
        ll res=0;
        for(int j =0;j<i;j++){
            // cout<<"j:"<<j<<(t[j]*t[i-1-j])<<endl;
            res+=t[j]*t[i-1-j];
        }
        t[i]=res;
        // cout<<i<<"res"<<t[i]<<endl;
    }

    return t[n];
}


unsigned long int binomialCoeff(unsigned int n ,unsigned int k){
    unsigned long int res =1;
    if(k>n-k){
        k=n-k;
    }

    for(int i = 0 ; i<k ; i++){
        res*=(n-i);
        res/=(i+1);
    }

    return res;    
}

unsigned long int catalan3(unsigned long int n){
     // Calculate value of 2nCn 
    unsigned long int c = binomialCoeff(2*n, n); 
  
    // return 2nCn/(n+1) 
    return c/(n+1); 
}


int main(){
  int n;
  cin>>n;
  cout<<catalan2(n)<<"\n";
}
