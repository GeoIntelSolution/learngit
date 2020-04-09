#include<bits/stdc++.h>
using namespace std;
#define DEBUG
inline
void calc(stack<int> &s,char ch){
    int l =s.top();
    s.pop();
    int r =s.top();
    s.pop();
    switch (ch)
    {
    case '+':
        s.push(r+l);
        break;
    case '-':
        s.push(r-l);
        break;
    case '*':
        s.push(l*r);
        break;
    case '/':
        s.push(r/l);
        break;    
    default:
        break;
    }
}


int main(){
    #ifdef DEBUG
        freopen("1.in","r",stdin);
        freopen("1.out","w",stdout);
    #endif
    string s;
    cin>>s;
    stack<int> sk1;
    char ch;
    int opnum=0,result;
    for(int i=0;i<s.size();i++){
       ch=s.at(i);
       if(ch=='.'){
        //    cout<<"opnum"<<opnum<<"\n";
           sk1.push(opnum);
           opnum=0;
       }else if(ch=='@'){
           result=sk1.top();
           cout<<result;
       }else if(ch=='+'){
           calc(sk1,ch);
       }else if(ch=='-'){
           calc(sk1,ch);

       }else if(ch=='*'){
           calc(sk1,ch);
       }else if(ch=='/'){
           calc(sk1,ch);
       }
       else{
           opnum=opnum*10+ch-'0';
       }
    }

}