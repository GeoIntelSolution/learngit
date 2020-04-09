#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
pair<int,int> arr[1<<10];
bool compare(pair<int,int> &x,pair<int,int>& y){
    if(x.first!=y.first){
        return x.first<y.first;
    }
    return x.second<y.second;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,t;
    cin>>n;
    for(int i= 0; i<n;i++){
        cin>>t;
        arr[i]=make_pair(t,i+1);
    }

    sort(arr,arr+n,compare);
    double sum =0;
    for(int i =0 ; i< n ;i++){
        cout<<arr[i].second<<" ";
        if(i!=0)
            sum+=(n-i)*arr[i-1].first;
        // cout<<(n-i)*arr[i-1].first<<"\n";    
    }

    cout<<"\n";
    cout<<fixed<<setprecision(2)<<(sum/n)<<"\n";
}