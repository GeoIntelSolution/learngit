#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    int n=max(s1.size(),s2.size());
    string  s3(n+1,'0');
    int m=0,a;
    for(int i=0;i<n;i++){
        if(i<s1.size()&&i<s2.size()){
            a =s1.at(i)-'0'+s2.at(i)-'0'+m;
            m=a/10;
            s3[i]='0'+(a%10);
        }else if(i<s1.size()){
            a=s1.at(i)-'0'+m;
            m=a/10;
            s3[i]='0'+(a%10);
        }else if(i<s2.size()){
            a=s2.at(i)-'0'+m;
            m=a/10;
            s3[i]='0'+(a%10);
        }
    }

    reverse(s3.begin(),s3.end());
    if(m!=0){
      cout<<m;
    }

    for(auto u= s3.begin()+1;u!=s3.end();++u){
        cout<<(*u);
    }
    cout<<"\n";


  
}