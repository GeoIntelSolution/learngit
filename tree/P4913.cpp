#include<bits/stdc++.h>
using namespace std;
struct node{
    int v;
    node* l,*r;
    node(int val):v(val),l(NULL),r(NULL){

    }
};
const int maxn=1000000+3;
node* arr[maxn];


int calh(node* root){
    if(root==NULL){
        return 0;
    }

    return max(calh(root->r),calh(root->l))+1;
}


void inoder(node* root){
    if(root){
        inoder(root->l);
        cout<<root->v<<" ";
        inoder(root->r);
    }
}

int main(){
    int n,x,y;
    cin>>n;
    for(int i =1 ; i<=n;i++){
        arr[i]=new node(i);
    }
    for(int i =1 ; i<=n;i++){
        cin>>x>>y;
        // cout<<"x"<<x<<"y"<<y<<endl;
        if(x!=0){
            arr[i]->l=arr[x];
        } 
        if(y!=0){
            arr[i]->r =arr[y];
        }
    }
    // cout<<arr[1]->v;
    // inoder(arr[1]);
    cout<<calh(arr[1])<<endl;
    return 0;
}