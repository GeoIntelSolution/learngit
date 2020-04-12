#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int lx,ly,rx,ry;

void color(){
    for(int j=lx-1;j<rx;j++){
        for(int i=ly-1;i<ry;i++){
            arr[j][i]++;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>lx>>ly>>rx>>ry;
        color();
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}