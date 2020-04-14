#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int n;
    cin>>n;

    unsigned int h=n>>(16);
    unsigned int l =n&(0xFFFF);
    cout<<((l<<16)+h)<<endl;
    
}