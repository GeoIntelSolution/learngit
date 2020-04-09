#include<bits/stdc++.h>
using namespace std;

struct node{
    int m;
    int i;
    node*  r,*l;
    node(int m1):i(m1),l(NULL),r(NULL){}
};

node* arr[100+3];
int main(){
    int n;
    cin>>n;
    int w,u,v;
    for(int i=1;i<=n;i++){
         arr[i]=new node(i);
    }
    for(int i=0;i<n;i++){
        cin>>w>>u>>v;
        arr[i]->m=w;
        arr[i]->l=arr[u];
        arr[i]->r=arr[v];
    }
    
    return 0;
}