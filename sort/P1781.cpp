#include<bits/stdc++.h>
using namespace std;
string s[20+1];
string compare(string  &s1,string &s2){
    if(s1.length()>s2.length()){
        return s1;
    }else if (s1.length()<s2.length()){
        return s2;
    }else{
        return s1>s2?s1:s2;    
    }
}
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
       cin>>s[i];
   }
   string res=s[1];
   int m=1;
   for(int i=2;i<=n;i++){
       res=compare(res,s[i]);
       if(res==s[i]){
           m=i;
       }
   }

   cout<<m<<"\n";
   cout<<res<<"\n";

}