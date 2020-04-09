#include<bits/stdc++.h>
using namespace std;

int a[127];





void solve(int* a,int n){
    bool first = true;
    for(int i =0 ;i<=n;i++){
        if(a[i]==0) continue;
        if(first){
            first=false;
        }else{
            if(a[i]>0){
                cout<<"+";
            }
        }
        if(a[i]!=1&&a[i]!=-1){
            if(n==i){
                cout<<a[i];
                continue;
            }
            else{
                if(n==i+1){
                    cout<<a[i]<<"x";
                }else{
                    cout<<a[i]<<"x^"<<(n-i);
                }
            }
        }else if(a[i]==1){
             if(n==i){
                cout<<a[i];
                continue;
            }
            else{
                 if(n==i+1){
                    cout<<"x";
                }else{
                    cout<<"x^"<<(n-i);
                }
            }
        }else if(a[i]==-1){
            if(n==i){
                cout<<a[i];
                continue;
            }
            else{
                if(n==i+1){
                    cout<<"-x";
                }else{
                cout<<"-x^"<<(n-i);
                }
            }
        }
    }

}
int main(){
    int n;
    cin>>n;
    for(int i = 0 ;i<=n ;i++){
        cin>>a[i];
    }
    solve(a,n);
}