#include<iostream>
#include<algorithm>
using namespace  std;

const int maxn =1000000+3;
pair<int,int> arr[maxn];
//开始的早的测略
bool comparefunc1(pair<int,int> &x ,pair<int,int> &y){
    if(x.first==y.first){
        return x.second<y.second;
    }

    return x.first<y.first;
}

//end earliest method
bool comparefunc2(pair<int,int> &x ,pair<int,int> &y){
    if(x.second==y.second){
        return x.first>y.first;
    }

    return x.second<y.second;
}

void printarr(pair<int,int> v){cout<<v.first<<" "<<v.second<<"\n";}
int main(){
    int n,l,r ;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>l>>r;
        arr[i]=make_pair(l,r);
    }
    sort(arr,arr+n,comparefunc2);
    // cout<<"-------\n";
    // for_each(arr,arr+n,printarr);
    int xx=1;
    int prev =arr[0].second;
    for(int i=1;i<n;i++){
        if(arr[i].first>=prev){
              xx++;
              prev=arr[i].second;  
        }
    }

    cout<<xx<<"\n";
    return 0;
}