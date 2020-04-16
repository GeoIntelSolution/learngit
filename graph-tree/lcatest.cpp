#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    vector<int> g[n+1];
    int log=(int)ceil(log2(n));
    int **memo=new int*[n+1];
    for(int i=0;i<n+1;i++)
        memo[i] =new int[log+1];

    g[1].push_back(2); 
    g[2].push_back(1); 
    g[1].push_back(3); 
    g[3].push_back(1); 
    g[1].push_back(4); 
    g[4].push_back(1); 
    g[2].push_back(5); 
    g[5].push_back(2); 
    g[3].push_back(6); 
    g[6].push_back(3); 
    g[3].push_back(7); 
    g[7].push_back(3); 
    g[3].push_back(8); 
    g[8].push_back(3); 
    g[4].push_back(9); 
    g[9].push_back(4); 

    dfs(1,1,memo,lev,log,g);

        
}