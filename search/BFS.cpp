#include<bits/stdc++.h>

using namespace std;

const int maxn =10;

bool room[maxn][maxn];

int n,m;
#define CHECK(a,b) (a<=n&&a>=1&&b<=m&&b>=1)

struct node{int x,y,v; node* prev;};
node start,end;

int dir[4][2]={
    {-1,0},
    {0,-1},
    {1,0},
    {0,1}
};

void bfs(int dx,int dy,int sx,int sy){
    start.x=dx,start.y=dy,start.prev=nullptr;start.v=0;
    room[dx][dy]=0;
    queue<node*> q;
    q.push(&start);
    node *cur;
    while(!q.empty()){
        cur=q.front();
        cout<<"["<<cur->x<<","<<cur->y<<"]\n";
        if(cur->x==sx&&cur->y==sy){
            cout<<cur->v<<"\n";
            node* head =cur;
            while (head)
            {
                cout<<"["<<head->x<<","<<head->y<<"]\n";
                head=head->prev;
            }
            
            break;
        }
        q.pop();
        for(int i=0;i <4;i++){
            int newx = cur->x+dir[i][0];
            int newy = cur->y+dir[i][1];
            if(CHECK(newx,newy)&&room[newx][newy]!=0){
                node* next =new node();
                next->x=newx;
                next->y=newy;
                next->prev=cur;
                next->v=cur->v+1;
                room[newx][newy]=0;
                q.push(next);
            }            
        }
    }

}

int main(){
  
    cin>>n>>m;    
    int dx,dy;
    cin>>dx>>dy;
    int sx,sy;
    cin>>sx>>sy;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>room[i][j];
    bfs(dx,dy,sx,sy);

     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cout<<room[i][j]<<" ";
        cout<<endl;    
     }
    return 0;
}