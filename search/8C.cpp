#include<bits/stdc++.h>
using namespace std;
#define CHECK(x,y) (x>=0&&x<3&&y>=0&&y<3)

const int LEN =362880;
int start[9],goal[9];
struct node{
    int state[9];
    int dis;
};
int dir[4][2]={
    {-1,0},
    {0,-1},
    {1,0},
    {0,1}
};

int visited[LEN]={0};
long factorty[10]={1,1,2,6,24,120,720,5040,40320,262880};
bool Cantor(int* str,int n){
    long result = 0;
    for(int i=0;i<n;i++){
        int counted=0;
        for(int j = i+1;j<n;j++){
            if(str[i]>str[j]) ++counted;
        }
        result+= counted*factorty[n-i-1];
    }

    if(!visited[result]){
        visited[result]=true;
        return 1;
    }
    else 
        return 0;
}

int bfs(){
    node head;
    memcpy(head.state,start,sizeof(head.state));//复制起点状态
    head.dis=0;
    queue<node> q;
    Cantor(head.state,9);
    q.push(head);

    while(!q.empty()){
        head=q.front();
        q.pop();
        int z;
        for(z=0;z<9;z++)
            if(head.state[z]==0){
                break;
            }
        int x =z%3;
        int y=z/3;
        for(int i=0;i<4;i++){
            int newx = x + dir[i][0];
            int newy = y + dir[i][1];
            int nz = newx+newy*3;
            if(CHECK(newx,newy)){
                node newnode;
                memcpy(&newnode,&head,sizeof(struct node));
                swap(newnode.state[z],newnode.state[nz]);
                newnode.dis++;
                if(memcmp(newnode.state,goal,sizeof(goal))==0){
                    return newnode.dis;
                }

                if(Cantor(newnode.state,9))
                    q.push(newnode);
            }
        }    
    }

    return -1;
}

int main(){
    for(int i=0;i<9;i++) cin>>start[i];//初始状态
    for(int i=0;i<9;i++) cin>>goal[i];
    int num =bfs();
    if(num!=-1) cout<<num<<"\n";
    else cout<<"Impossible\n";
    return 0;
}