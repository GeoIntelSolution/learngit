#include<bits/stdc++.h>
using namespace std;

struct Person
{
    int no,weight;
    Person(){}
    Person(int n,int w):no(n),weight(w){}
    bool operator<(const struct Person &p1) const{
        if(p1.weight==weight){
            return no>p1.no; 
        }
        return weight<p1.weight;
    }
};


priority_queue<Person> a;
priority_queue<Person> b;
priority_queue<Person> c;


int no =0;

inline void update(int cc,int w){
    Person p ;
    // cout<<"no"<<no<<endl;
    if(cc==1){
        p.no=++no;
        p.weight=w;
        a.push(p);
    }
    if(cc==2){
        p.no=++no;
        p.weight=w;
        b.push(p);
    }
    if(cc==3){
        p.no=++no;
        p.weight=w;
        c.push(p);
    }
}

inline void out(int cc){
    // cout<<"cc"<<cc<<endl;
    if(cc==1){
        if(a.empty()){
            cout<<"EMPTY\n";
        }else{
            cout<<a.top().no<<"\n";
            a.pop();
        }
    }

     if(cc==2){
        if(b.empty()){
            cout<<"EMPTY\n";
        }else{
            cout<<b.top().no<<"\n";
            b.pop();
        }
    }

     if(cc==3){
        if(c.empty()){
            cout<<"EMPTY\n";
        }else{
            cout<<c.top().no<<"\n";
            c.pop();
        }
    }
}


void init(){
    while (!a.empty()) a.pop();    
    while (!b.empty()) b.pop();    
    while (!c.empty()) c.pop();    
}
int main(){
    int N;
  
    while(cin>>N){
        string OP;
        int cc,p;
        no=0;
        init();
        while(N--){
            cin>>OP;
            // cout<<N<<OP<<endl;
            if(OP=="IN"){
                cin>>cc>>p;
                // cout<<cc<<p;
                update(cc,p);
                // cout<<"done";
            }
            
            if(OP=="OUT"){
                cin>>cc;
                out(cc);
            }
        }
    }
    return 0;
}
