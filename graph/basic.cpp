#include<bits/stdc++.h>
using namespace std;
const int NUM=1000000+5;
struct Edge{
    int to,next,w;
}edge[NUM];

int head[NUM];
int cnt;
void init(){
    for(int i=0;i<NUM;++i){
        edge[i].next=-1;
        head[i]= -1;
    }
    cnt=0;
}


void addedge(int u,int v,int w){
    edge[cnt].to=v;
    edge[cnt].w=w;
    edge[cnt].next=head[u];
    head[u]=cnt++;
}


int main(){

    return 0;
}           