#include<bits/stdc++.h>
using namespace std;
#define fore(i,l,r) for(int i = l;i<=r;i++)

const int maxn =1000+3;
int arr[maxn];
int height[maxn];

void printarr(int n){
    cout<<"arr";
    fore(i,1,n) cout<<arr[i]<<" ";
    cout<<"\n";
}
void init_set(int n){
    fore(i,1,n) {
      arr[i]=i;
      height[i]=0;
    }
}
//path compression
int find_set(int x){
    int r=x;
    while (arr[r]!=r) r=arr[r];//find root value
    int i =x,j;//run again and reassign;
    while (i!=r)
    {
        j=arr[i];//list next
        arr[i]=r;//point 2 root;
        i=j;//
    }
    return r;
}

void union_set(int rx,int ry){
    int l = find_set(rx);
    int r = find_set(ry);
    if(height[l]==height[r]){
        height[l]=height[r]+1;
        arr[r]=l;
    }else{
        if(height[l]<height[r]) arr[l]=r;
        else arr[r]=l;
    }

}

int countc(int n){
    int c=0;
    fore(i,1,n){
        if(arr[i]==i) c++; 
    }
    return c;
}



int main(){
    int n,m,rx,ry;
    while(cin>>n>>m){
        init_set(n);    
        fore(i,1,m){
           cin>>rx>>ry;
           union_set(rx,ry); 
        }
        int c=countc(n);
        cout<<c-1<<"\n";
    }
}