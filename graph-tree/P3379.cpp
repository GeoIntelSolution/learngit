#include<bits/stdc++.h>
using  namespace std;
const int maxn=500000;
vector<int> G[maxn];
// int depth[maxn];
bool vis[maxn];
struct node{
    int id;
    int depth;
    vector<node*> children;
    node(){}
};
node* root;
queue<node*> qlist;

//获取深度
void bfs(int s){
    vis[s]=true;
    root=new node();
    root->depth=1;
    root->id=s;
    qlist.push(root);

    while (!qlist.empty())
    {
        node* x=qlist.front();
        cout<<x->id<<" \n";
        qlist.pop();
        for(auto xx: G[x->id]){
            if(!vis[xx]){
                node* temp =new node();
                temp->depth=x->depth+1;
                temp->id=xx;
                x->children.push_back(temp);
                vis[xx]=true;
                qlist.push(temp);
            }
        }
    }
}

void levelOrder(){
    queue<node*> qrr;
    qrr.push(root);
    while (!qrr.empty())
    {
        auto x=qrr.front();
        qrr.pop();
        cout<<x->depth<<":"<<x->id<<endl;
        for(auto xx:x->children){
            qrr.push(xx);
        }

        free(x);
    }
}

// node lca(node root,node n1 ,node n2){
//     if(root==null) return null;
//     if(root==n1&&root==n2) return root;
//     node left =lca(root->left,n1,n2);
//     node right=lca(root->right,n1,n2);
//     if(left!=null&&righ!=null) return root;
//     if(left==null&&right==null) return null;

//     return left==null?left:right;
// }

node* lca(node* root,int x,int y){
}

int main(){
    int n,m,s;
    cin>>n>>m>>s;
    for(int i=1;i<=n-1;i++){
        int u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    bfs(s);
    levelOrder();

    lca(root,2,4);
    



}