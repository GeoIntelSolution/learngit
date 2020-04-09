#include<iostream>
#include<iomanip>
using namespace std;
int n,m,t,sx,sy,ex,ey;

bool room[6][6];
int dir[4][2]={
    {-1,0},
    {0,-1},
    {1,0},
    {0,1}
};

int total=0;

#define CHECK(x,y) (x<=n&&x>=1&&y<=m&&y>=1)
void dfs(int x,int y){
    if(x==ex&&y==ey){
        total++;
        room[x][y]=false;
        // for(int i=1;i<6;i++)
        // {
        //     for(int j=1;j<6;j++){
        //         cout<<setw(3)<<room[i][j];
        //     }
        //     cout<<"\n";
        // }
        // cout<<"----------"<<total<<"------\n";
        return;
        // cout<<"total"<<total<<endl;
    }
    for(int i=0;i<4;i++){
        int newx =x+dir[i][0];
        int newy =y+dir[i][1];
        if(CHECK(newx,newy)&&!room[newx][newy]){
            room[newx][newy]=true;
            // cout<<newx<<":"<<newy<<"\n";
            dfs(newx,newy);
            // cout<<"out"<<newx<<":"<<newy<<"\n";
            room[newx][newy]=false;
        }
    } 


}
int main(){
    cin>>n>>m>>t;
    cin>>sx>>sy>>ex>>ey;
    int x,y;
    while (t--)
    {
        cin>>x>>y;
        room[x][y]=true;
    }
    room[sx][sy]=true;
    dfs(sx,sy);
    
    cout<<total<<"\n";
    return 0;
}