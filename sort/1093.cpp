#include<bits/stdc++.h>
using namespace std;
const int maxn =301;
pair<int,pair<int,int> >  arr[maxn];
bool cmp1(pair<int,pair<int,int> > &x,pair<int,pair<int,int> > &y){
    return x.first>y.first;
}

bool cmp2(pair<int,pair<int,int> > &x,pair<int,pair<int,int> > &y){
    return x.second.first>y.second.first;
}

bool cmp3(pair<int,pair<int,int> > &x,pair<int,pair<int,int> > &y){
    return x.second.second>y.second.second;
}

bool cmp(int &x,int &y){
    return x<y;
}
void test(){
    int a[4] ={3,2,1,4};
    sort(a,a+4,cmp);
    for(int i =0 ; i <4;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";

}

void printarr(pair<int,pair<int,int> >* arr,int n){
     for(int i =1 ; i <=n;i++){
        cout<<arr[i].first<<","<<arr[i].second.first<<","<<arr[i].second.second<<"\n";
    }
    cout<<"----\n";

}

bool compare(const pair<int,pair<int,int> > &x, const pair<int,pair<int,int> > &y) {
    if(x.first!=y.first){
        return x.first>y.first;
    }

    if(x.second.first!=y.second.first){
        return x.second.first>y.second.first;
    }

    return (x.second.second<y.second.second);
}

int main(){
    // test();
    int n;
    cin>>n;
    int a,b,c;
    for(int i = 0; i<n ; i++){
        cin>>a>>b>>c;
        arr[i]=make_pair<int,pair<int,int> >(a+b+c,{a,i+1});
    }
    sort(arr,arr+n,compare);

    for(int i = 0; i<5; i++){
        cout<<arr[i].second.second<<" "<<arr[i].first<<"\n";
    }
}