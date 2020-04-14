#include<bits/stdc++.h>
using namespace std;
struct  person{
    string name;
    int y,m,d,i;
    person(int i,string n,int y,int m,int d){
        this->i=i;
        this->name=n;
        this->y=y;
        this->m=m;
        this->d=d;
    }
};
person* arr[100+1];

bool compare(person* p1,person* p2){
    if(p1->y!=p2->y){
        return p1->y<p2->y;
    }
    
    if(p1->m!=p2->m){
        return p1->m<p2->m;
    }

    if(p1->d!=p2->d){
        return p1->d<p2->d;
    }

    return p1->i>p2->i;

}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string n;
        int y,m,d;
        cin>>n>>y>>m>>d;
        arr[i]=new person(i,n,y,m,d);
    }

    sort(arr,arr+n,compare);

    for(int i=0;i<n;i++){
        cout<<arr[i]->name<<"\n";
    }
}