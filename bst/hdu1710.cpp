#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int pre[N],in[N],post[N];
int k;
struct node{
    int ch;
    node* l ,*r;
    node(int v):ch(v),l(nullptr),r(nullptr){}
};

void buildtree(int l,int r,int &t,node* &root){
    int flag=-1;
    for(int i=l;i<=r;i++){
        if(in[i]==pre[t]){
            flag=i;break;
        }
    }
    // cout<<"flag"<<flag<<endl;
    if(flag==-1) return;
    root= new node(in[flag]);
    t++;
    if(flag>l) buildtree(l,flag-1,t,root->l);
    if(flag<r) buildtree(flag+1,r,t,root->r);
}

void preorder(node* root){
    if(root){
      post[k++]=root->ch;
      preorder(root->l);
      preorder(root->r);  
    }
}

void inorder(node * root){
    if(root){
        inorder(root->l);
        post[k++]=root->ch;
        inorder(root->r);
    }
}

void postorder(node* root){
    if(root){
        postorder(root->l);
        postorder(root->r);
        post[k++]=root->ch;
    }
}
void remove_tree(node* root){
    if(!root) return;
    if(root->l)
        remove_tree(root->l);
    if(root->r)
        remove_tree(root->r);
    delete root;        
}

int main(){
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++) cin>>pre[i]; 
        for(int i=1;i<=n;i++) cin>>in[i];
        node* root;
        int t=1;
        buildtree(1,n,t,root); 
        k=1;
        postorder(root);
        for(int i=1;i<=n;i++) cout<<post[i]<<" ";
        remove_tree(root);
    }
    return 0;
}