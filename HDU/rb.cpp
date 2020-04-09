#include<bits/stdc++.h>
using namespace std;
char room[23][23];
int Wx,Hy,num;
struct node{int x, y;};
#define CHECK(x,y) (x<Wx&&x>=0&&y>=0&&y<Hy)


int dir[4][2]={
    {-1,0},//left
    {0,-1},//upper
    {1,0},//right
    {0,1}
};

void BFS(int dx,int dy){
    num=1;//include the start point
    queue<node> q;
    node start,next;
    start.x=dx;
    start.y=dy;
    q.push(start);
    while (!q.empty())
    {
        start=q.front();
        // cout<<start.x<<":"<<start.y<<"\n";
        q.pop();
        for(int i=0;i<4;i++){
            next.x=start.x+dir[i][0];
            next.y=start.y+dir[i][1];
            if(CHECK(next.x,next.y)&&room[next.x][next.y]=='.'){
                room[next.x][next.y]='#';//置
                num++;
                q.push(next);
            }
        }
      
    }
    

}

int main(){
    int x,y,dx,dy;
    while (cin>>Wx>>Hy)
    {
        if(Wx==0&&Hy==0)
            break;
        for(y=0;y<Hy;y++){
            for(x=0;x<Wx;x++){
                cin>>room[x][y];
                if(room[x][y]=='@'){
                    dx=x;
                    dy=y;
                }
            }
        }

        num=0;
        BFS(dx,dy);
        cout<<num<<endl;    
              
    }
    
}