#include <bits/stdc++.h>//lazy laading
using namespace std;
const int maxn =25;

int n,k,arr[maxn];
bool brr[maxn];

void dfs(int step){
    if(step>k){
        cout<<step<<"\n";
        for(int r=1;r<=k;r++)
            cout<<setw(3)<<arr[r];
        cout<<"\n";

        return;
    }

    for(int i =1; i <=n;i++){
        if(!brr[i]&&i>arr[step-1]||step==1){
            arr[step] = i ;
            brr[step] = true;
            dfs(step+1);
            arr[step] = 0 ;//nothing ,but for remeber need to clear,or pop_back
            brr[step] = false;
        }

    }

}
int main(){
   cin>>n>>k; 
   dfs(1);
   return 0;
}