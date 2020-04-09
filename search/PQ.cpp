#include<iostream>
#include<queue>

using namespace std;

// int main(){
//     //大顶堆
//     priority_queue<int> a;
//     //小堆
//     priority_queue<int,vector<int>,greater<int>> c;
//     priority_queue<string> b;

//     for(int i =0 ;i<5;i++){
//         a.push(i);
//         c.push(i);
//     }

//     while(!a.empty()){
//         cout<<a.top()<<" ";
//         a.pop();
//     }

//     cout<<endl;

//     while (!c.empty())
//     {
//         /* code */
//         cout<<c.top()<<" ";
//         c.pop();
//     }
//     cout<<endl;

//     b.push("abc");
//     b.push("abc");
//     b.push("cbd");

//     while (!b.empty())
//     {
//         cout<<b.top()<<" ";
//         b.pop();
//     }
    
//     return 0;
// }


// int main(){
//     priority_queue<pair<int,int>> a;
//     pair<int,int> b(1,2);
//     pair<int,int> c(1,3);
//     pair<int,int> d(2,5);

//     a.push(b);
//     a.push(c);
//     a.push(d);
//     while (!a.empty())
//     {
//         cout<<a.top().first<<' '<<a.top().second<<"\n";
//         a.pop();
//     }
    
//     return 0; 
// }

struct temp1{
    int x;
    temp1(int a):x(a){}
    bool operator<(const temp1& a) const{
        return x<a.x;
    }
};  

struct  temp2
{
    bool operator() (temp1 a,temp1 b){
        return a.x>b.x;
    }
};


int main(){
    priority_queue<temp1> d;
    for(int i=1;i<=5;i++){
        d.push(temp1(i));
    }

    while (!d.empty())
    {
        cout<< d.top().x <<" ";
        d.pop();
    }
    cout<<endl;
    priority_queue<temp1,vector<temp1>,temp2> e;
    for(int i=1;i<=5;i++){
        e.push(temp1(i));
    }
     while (!e.empty())
    {
        cout<< e.top().x <<" ";
        e.pop();
    }
    return 0;
}