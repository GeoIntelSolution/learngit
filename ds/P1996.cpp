#include<bits/stdc++.h>
using namespace std;

struct CycleList{
    int val;
    CycleList *next;
    CycleList(int v):val(v){
        this->next=this;
    }
    void insert(CycleList *one){
        auto t=this->next;
        this->next=one;
        one->next=t;
    }

    void earse(){
        auto t=this->next;
        auto r= t->next;
        cout<<t->val<<" ";
        free(t);
        this->next=r;
    }

};

int main(){
   int n,m;
   cin>>n>>m;
   CycleList *prev,*head,*cur; 
   for(int i=1;i<=n;i++){
       if(i==1){
         head =new CycleList(i);
         prev=head;
       }
       else  
        {prev->insert(new CycleList(i));prev=prev->next;}
   }

   

   cur=head; 

   while(cur->next!=cur){
       int s=1;
       while (s++<m-1)
       {
           cur=cur->next;
       }
       cur->earse();
       cur=cur->next;
   }
   cout<<cur->val<<" ";
   free(cur); 
}