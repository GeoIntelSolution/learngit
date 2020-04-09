#include<bits/stdc++.h>
using namespace std;
struct node{
    char ch;
    node* l,*r;
    node(char ch1):ch(ch1),l(NULL),r(NULL){

    }
};

void construct_tree(string pre ,string inorder,node * &root){
    char r=pre.at(0);
    root=new node(r);
    int j=-1;
    for(int i= 0 ;i<inorder.size();i++){
        if(inorder.at(i)==r){
            j=i;
            break;
        }
    }

    int ll = j;
    int rl = inorder.size()-j-1;    
    //[0,i-1] l   [i+1,sz] r
    if(ll>0)
    construct_tree(pre.substr(1,ll),inorder.substr(0,ll),root->l);
    if(rl>0)
    construct_tree(pre.substr(ll+1,rl),inorder.substr(ll+1,rl),root->r);
}



void postorder(node* root){
    if(root){
        postorder(root->l);
        postorder(root->r);
        cout<<root->ch;
    }
}

int main(){
    string pre,inorder;
    cin>>inorder>>pre;
    node* root;
    construct_tree(pre,inorder,root);
    postorder(root);
    return 0;
}