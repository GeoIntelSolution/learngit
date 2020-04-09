#include<bits/stdc++.h>
using namespace std;

int calDP(const string &s1,int i,const string &s2,int j){
    if(i==s1.size()) return s2.size()-j;
    if(j==s2.size()) return s1.size()-i;
    if(s1.at(i)==s2.at(j))
        return calDP(s1,i+1,s2,j+1);
    else
    {
        return 1+min(calDP(s1,i,s2,j+1),calDP(s1,i+1,s2,j));
    }
        
}


int solve(const string &s1,const string &s2){
     if(s1.size()==0) return s2.size();
    if(s2.size()==0) return s1.size();
    return calDP(s1,0,s2,0);
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<solve(s1,s2)<<"\n";

}