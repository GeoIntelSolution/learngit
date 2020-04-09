#include<bits/stdc++.h>
using namespace std;
int n,r;
int a[50]; //a数组存每一次选的数
bool b[50];
void print(){ //打印函数
    for(int i=1; i<=r; i++)
    cout<<setw(3)<<a[i];//定义场宽为3，直接输出只能得10分
    cout<<endl;
}
void search(int t){
    int i ;
    if(t>r){
        print();
        return;
    }

    for(i =1;i<=n;i++)//enmurate every number
    {
        if(!b[i]&&i>a[t-1]||t==1){
            //i未使用过且i必须大于前个数，但1除外
            a[t]=i;
            b[i]=true;// i使用
            search(t+1);//继续搜索
            a[t]=0;//回溯
            b[i]=false;
        }
    }

}
int main(){
    cin>>n>>r;
    search(1);
    return 0;
}