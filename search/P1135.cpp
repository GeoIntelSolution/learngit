#include<bits/stdc++.h>
using namespace std;
const int maxn =200+1;
int arr[maxn];
bool vis[maxn];
int n;
int dir[2]={
    -1,1
};

#define CHECK(a)  (a<=n&&a>=1)

struct node{ int i,step;};
void bfs(int start,int end){
    node head ,cur;
    head.step=0;
    head.i=start;
    queue<node> q;
    q.push(head);
    vis[start]=true;
    bool ans=false;
    while (!q.empty())
    {
        cur=q.front();
        // cout<<"node"<<cur.i<<"\n";
        q.pop();
        if(cur.i==end){
            cout<<cur.step<<"\n";
            ans=true;
            break;
        }else{
            for(int i=0;i<2;i++){
                int l = cur.i+dir[i]*arr[cur.i];
                // cout<<"l"<<l;
                if(CHECK(l)&&!vis[l]){
                    // cout<<"here"<<"\n";
                    node t;
                    t.i=l;
                    t.step=cur.step+1;
                    q.push(t);
                    vis[l]=true;
                }
            }
        }

    }
    if(!ans)
         cout<<-1<<"\n";
}


int main(){
    int a,b;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    bfs(a,b);
    return 0;

}
