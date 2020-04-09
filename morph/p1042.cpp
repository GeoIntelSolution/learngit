#include<bits/stdc++.h>
using namespace std;


inline bool is_finished(int w,int l,int k ){
    int a=max(w,l);
    int b=min(w,l);
    if(a==k&&(a-b)>=2){
        return true;
    }

    if(a>k&&(a-b)>=2){
        return  true;
    }

    return false;

}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int,int>> s2;
    char c;
    int w1=0,w2=0,l1=0,l2=0;
    while(cin>>c&&c!='E'){
        if(c=='W'){
            w1++;
            w2++;
        }

        if(c=='L'){
            l1++;
            l2++;
        }

        if(is_finished(w1,l1,11)){
            cout<<w1<<":"<<l1<<"\n";
            w1=0;l1=0;
        }
        if(is_finished(w2,l2,21)){
            s2.push_back({w2,l2});
            w2=0;l2=0;
        }
    }

    cout<<w1<<":"<<l1<<"\n";

   

    cout<<" "<<"\n";
    for(auto pv:s2){
        cout<<pv.first<<":"<<pv.second<<"\n";
    }

  cout<<w2<<":"<<l2<<"\n";
}
