#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,step;
    cin>>n>>m;
    bool b;
    string s;
    vector<pair<bool,string> > v;
    for(int i=1;i<=n;i++){
       cin>>b>>s;
       v.push_back({b,s});
    }

    int ans=0;
    for(int i=0;i<m;i++){
        cin>>b>>step;
        if(b){
            //right
            if(v[ans].first){
                //圈外

                ans=(ans-step)%n;
                if(ans<0){
                    ans+=n;
                }
                // cout<<"2X"<<ans<<endl;

            }else{
                ans=(ans+step)%n;
            }
        }else{
            //left
            if(v[ans].first){
                //圈外
              

                ans=(ans+step)%n;
                //   cout<<"3X"<<ans<<endl;
            }else{
                //圈外
                ans=(ans-step)%n;
                if(ans<0){
                    ans+=n;
                }
                // cout<<"1X"<<ans<<endl;

            }

        }
    }

    cout<<v[ans].second<<"\n";
}