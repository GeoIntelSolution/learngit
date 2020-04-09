#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> &x, pair<int,int> &y){
    double l=x.first!=0?((double)x.second)/x.first:0;
    double r=y.first!=0?((double)y.second)/y.first:0;
    return l>r;
}

pair<int,int> arr[1<<7];
int main(){
    int N,T,m,v;
    cin>>N>>T;
    for(int i =0 ;i<N;i++){
        cin>>m>>v;
        arr[i]=make_pair(m,v);
    }

    sort(arr,arr+N,compare);

    int i=0;
    double value =0;
    while (T&&i<N)
    {
        if(T>=arr[i].first){
            value+=arr[i].second;
            T-=arr[i].first;
            i++;
        }else{
            double p=arr[i].first!=0?((double)arr[i].second)/arr[i].first:0;
            value+=p*T;
            T=0;
        }
    }

    cout<<fixed<<setprecision(2)<<value<<"\n";
    
}