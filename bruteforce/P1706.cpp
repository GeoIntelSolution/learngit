#include <bits/stdc++.h>//lazy laading
using namespace std;
const int maxn =25;

int n,k,arr[maxn];
bool brr[maxn];

void dfs(int step){
    if(step>n){
        for(int r=1;r<=n;r++)
            cout<<setw(5)<<arr[r];
        cout<<"\n";
        return;
    }

    for(int i =1; i <=n;i++){
        if(!brr[i]){
            arr[step] = i ;
            brr[i] = true;
            dfs(step+1);
            // arr[step] = 0 ;//nothing ,but for remeber need to clear,or pop_back
            brr[i] = false;
        }

    }

}
int main(){
   cin>>n; 
   dfs(1);
   return 0;
}