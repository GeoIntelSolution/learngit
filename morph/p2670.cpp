#include<iostream>
using namespace std;


char v[100][100];

int sum(int i,int j,int n,int m){
    int cnt=0;
    for(int r=i-1;r<=i+1;r++){
        for(int c=j-1;c<=j+1;c++){
            if(r<0||r>=n||c<0||c>=m){
                continue;
            }

            if(v[r][c]=='*'){
                cnt++;
            }
        }
    }
    return cnt;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n*m;i++){
        cin>>v[i/m][i%m];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='*'){
                continue;
            }else if(v[i][j]=='?'){
                v[i][j]='0'+sum(i,j,n,m);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j];
        }
        cout<<"\n";   
    } 

}