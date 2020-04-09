#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
    Point(int dx,int dy):x(dx),y(dy){}
public:
    double distanceTo(const Point* p1){
        return (x-p1->x)*(x-p1->x)+(y-p1->y)*(y-p1->y);
    }    
};
Point* arr[16];
double dis[16];
bool vis[16];
int n;
double total=0;
void dfs(Point* start,int s ){
    if(s==n){
        cout<<fixed<<setprecision(2)<<total<<"\n";
        return;
    }
    // cout<<start->x<<":"<<start->y<<"\n";
    int j=-1;
    double minv=INT_MAX;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dis[i] =arr[i]->distanceTo(start);
            // j=dis[i]<minv?i:j;
            if(dis[i]<minv){
                j=i;
                minv=dis[i];
            }
            // cout<<j<<"d"<<dis[j]<<":"<<minv<<endl;
        }
    }
    // cout<<"look for"<<j<<"\n";
    // for_each(dis,dis+n,[](double val){cout<<sqrt(val)<<" ";});
    // cout<<endl;
    vis[j]=true;
    total+=sqrt(dis[j]);
    // cout<<total<<endl;
    dfs(arr[j],s+1);

}
int  main(){

    cin>>n;
    int x,y;
    for(int i =0 ; i<n ;i++){
        cin>>x>>y;
        arr[i]=new Point(x,y);
    }

    Point* mouse =new Point(0,0);
    dfs(mouse,0);
    return 0;
}