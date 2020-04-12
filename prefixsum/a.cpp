#include<bits/stdc++.h>
using namespace std;
void read(int &x)
{
    char c=getchar();x=0;
    while(c<'0'||c>'9')c=getchar();
    while(c<='9'&&c>='0')x=x*10+c-'0',c=getchar();
}

int main(){
    int a;
    read(a);
    cout<<a<<" ";
}