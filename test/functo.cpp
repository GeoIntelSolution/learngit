#include<bits/stdc++.h>
using namespace std;

void disp(int val){cout<<val<<endl;}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    vector<int> vec;
    copy_if(arr,arr+9,back_inserter(vec),bind1st(less<int>(),6));

    for_each(vec.begin(),vec.end(),disp);

    vec.clear();

    copy_if(arr,arr+9,back_inserter(vec),bind2nd(less<int>(),6));
    for_each(vec.begin(),vec.end(),disp);

}