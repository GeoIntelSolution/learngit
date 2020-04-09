#include<bits/stdc++.h>
using namespace std;
#define fore(i,j,r) for(int i=j;i<=r;i++)

vector<string> v;

int main(){
    int n;
    cin>>n;
    if(n<10||n>30) {cout<<"0\n";return 0;}
    int count=0;
    fore(x1,1,3)
        fore(x2,1,3)
            fore(x3,1,3)
                fore(x4,1,3)
                    fore(x5,1,3)
                        fore(x6,1,3)
                            fore(x7,1,3)
                                fore(x8,1,3)
                                    fore(x9,1,3)
                                        fore(x10,1,3){
                                              if(x1+x2+x3+x4+x5+x6+x7+x8+x9+x10==n){
                                                  count++;
                                                  string res;
                                                  res+=(x1+'0');  
                                                  res+=(x2+'0');  
                                                  res+=(x3+'0');  
                                                  res+=(x4+'0');  
                                                  res+=(x5+'0');  
                                                  res+=(x6+'0');  
                                                  res+=(x7+'0');  
                                                  res+=(x8+'0');  
                                                  res+=(x9+'0');  
                                                  res+=(x10+'0');
                                                  v.push_back(res);  
                                              }  
                                        }
    cout<<count<<"\n";
    for(auto &s :v){
        for(int i = 0 ;i <s.size();i++){
            cout<<s.at(i)<<" ";
        }
        cout<<"\n";
    }
}