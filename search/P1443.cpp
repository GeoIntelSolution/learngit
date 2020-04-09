#include<bits/stdc++.h>
using namespace std;
int n,m;
int chess[400+1][400+1];
//马踏八方
int dir[8][2]={
    {-2,1},
    {-1,2},
    {1,2},
    {2,1},
    {2,-1},
    {1,-2},
    {-1,-2},
    {-2,-1}
};

struct node{int x,y,s;};
#define CHECK(x,y) (x<=n&&x>=1&&y<=m&&y>=1)
void bfs(int dx,int dy){
    chess[dx][dy]=0;
    node start,next;
    start.x=dx;
    start.y=dy;
    start.s=0;//开始步数为0
    queue<node> qlist;
    qlist.push(start);
    while(!qlist.empty()){
        start =qlist.front();
        qlist.pop();
        // cout<<start.x<<":"<<start.y<<"\n";
        for(int i=0;i<8;i++){
            next.x=start.x+dir[i][0];
            next.y=start.y+dir[i][1];
            next.s=start.s+1;
            //fullfill next
            if(CHECK(next.x,next.y)&&chess[next.x][next.y]==-1){
                chess[next.x][next.y]=next.s;
                qlist.push(next);
            }
        }
    }
}



int main(){
    int dx,dy;
    cin>>n>>m>>dx>>dy;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            chess[i][j]=-1;
    bfs(dx,dy);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<setiosflags(ios::left)<<setw(5)<<chess[i][j];
        }
        cout<<"\n";
    }
    return 0;
}