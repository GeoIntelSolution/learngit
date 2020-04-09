#include<bits/stdc++.h>
using namespace std;

const int NUM=5;
struct edge{
    int from,to,w;
    edge(int a,int b ,int c){
        from=a;
        to=b;
        w=c;
    }
};

vector<edge> e[NUM];

void clear(int n){
    for(int i=1;i<=n;i++){
        e[i].clear();
    }
}

void addEdge(int a,int b,int c){
    e[a].push_back(edge(a,b,c));
}




int main(){
    int m,n;
    cin>>n>>m;
    int x,y;
    for(int i=1;i<=9;i++){
        cin>>x>>y;
        addEdge(x,y,0);
    }

}