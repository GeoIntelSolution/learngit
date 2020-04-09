#include<iostream>
using namespace std;
const int maxn=1<<10;
int n;
int pre[maxn],in[maxn],post[maxn];
struct Node{
    int val;
    Node *left,*right;
    Node(int v):val(v),left(nullptr),right(nullptr){}
};

void buildTree(int l,int r,int &t ,Node* &root){
    int flag=-1;
    for(int i=l;i<=r;++i){
        if(in[i]==pre[t]){
            //当前的root
            flag=i;break;
        }
    }
    if(flag==-1) return;
    root= new Node(pre[t]);
    // cout<<"root"<<root->val;
    t++;
    if(flag>l) buildTree(l,flag-1,t,root->left);
    if(flag<r) buildTree(flag+1,r,t,root->right);
}
int k;
void postorder(Node* root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        post[k++]=root->val;
    }

}

int main(){
    int i;
    while(cin>>n){
        for(i=0;i<n;i++) cin>>pre[i];
        for(i=0;i<n;++i) cin>>in[i];
        Node* root;
        int step=0;
        buildTree(0,n-1,step,root);
        // cout<<root->val<<"\n";
        k=0;
        postorder(root);
        for(i=0;i<n;i++){
            if(i==n-1){
                cout<<post[i]<<"\n";
            }else 
                cout<<post[i]<<" ";
            
        }

    }
    return 0;
}