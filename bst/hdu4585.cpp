#include<bits/stdc++.h>
using namespace std;
int id[5000000+5];
struct Node{
    int size;//
    int rank;//优先级
    int key;//键值
    Node* son[2];
    bool operator< (const Node &a) const{ return rank<a.rank;}
    int cmp(int x)const{
        if(x==key) return -1;
        return x<key?0:1;
    }
    void update(){
        size=1;
        if(son[0]!=NULL) size+=son[0]->size;
        if(son[1]!=NULL) size+=son[1]->size;
    }

};

void rotate(Node* &o,int d){
    Node* k = o->son[d^1];//d=0左旋,d=1右旋
    o->son[d^1]=k->son[d];
    k->son[d]=o;
    o->update();
    k->update();
    o=k;
}

void insert(Node* &o,int x){
    if(o==nullptr){
        o=new Node();
        o->son[0]=o->son[1]=nullptr;
        o->rank=rand();
        o->key=x;
        o->size=1;
    }else{
        int d= o->cmp(x);
        insert(o->son[d],x);
        o->update();
        if(o<o->son[d]){
            rotate(o,d^1);
        }
    }
}

int kth(Node* o,int k){
    if(o==NULL||k<=0||k>o->size){
        return -1;
    }
    int s= o->son[1]==NULL?0:o->son[1]->size;
    if(k == s+1) return o->key;
    else if(k<=s) return  kth(o->son[1],k);
    else return kth(o->son[0],k-s-1);
}


int find(Node *o,int k){
    if(o==NULL){
        return -1;
    }
    int d =o->cmp(k);
    if(d==-1){
        return  o->son[1]==NULL?1:o->son[1]->size+1;
    }else if(d==1) return kth(o->son[d],k);
    else{
        int tmp = find(o->son[d],k);
        if(tmp==-1) return -1;
        else{
            return o->son[1]==NULL?tmp+1:tmp+1+o->son[1]->size;
            `       
        }
    }
}


int main(){
    return 0;
}