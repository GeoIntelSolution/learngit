#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* ch[2];
    int r,v;
    Node(int v=0):v(v){ch[0]=ch[1]=nullptr;r=rand();}
    int cmp(const int& x)const{
        if(x==v) return -1;
        return x<v?0:1;
    }
};

void rotate(Node* &o,int d){
    Node* k = o->ch[d^1];
    o->ch[d^1]=k->ch[d];
    k->ch[d]=o;
    o=k;
}

void insert(Node * &o,int x){
    if(o==nullptr){
        o = new Node(x);
    }else{
        int d= o->cmp(x);
        insert(o->ch[d],x);
        if(o->ch[d]->r >o->r){
            rotate(o,d^1);
        }
    }    
}
