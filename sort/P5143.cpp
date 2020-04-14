#include<bits/stdc++.h>
using namespace std;
const int maxn =50000+1;
struct node{
    int x,y,z;
    node(int a,int b,int c):x(a),y(b),z(c){}
};
node* arr[maxn];

bool  compare(node* a,node *b){
    return a->z<b->z;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // cout<<fixed<<setprecision(3)<<(4*sqrt(3))<<endl;
    int n;
    cin>>n;
    int la=INT_MAX,lb=INT_MAX,lc=INT_MAX;
    int ha=INT_MIN,hb=INT_MIN,hc=INT_MIN;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        arr[i]=new node(a,b,c);
    }

    sort(arr,arr+n,compare);
    double ans=0;
    for(int i=1;i<n;i++){
        ans+=sqrt(pow(arr[i]->x-arr[i-1]->x,2)+pow(arr[i]->y-arr[i-1]->y,2)+pow(arr[i]->z-arr[i-1]->z,2));
    }

    cout<<fixed<<setprecision(3)<<ans<<"\n";
}