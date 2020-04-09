#include<bits/stdc++.h>
using namespace std;
#define Swap(a,b) {int temp=b;b=a;a=temp;}


int num= 0;
int arr[15]={1,2,3,4,5,6,7,8,10,32,15,18,33};
void Perm(int begin,int end){
    int i ;
    if(begin==3){
        for(int i=0;i<3;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        num++;
    }
    else
    {
        for(i=begin;i<=end;i++){
            Swap(arr[begin],arr[i]);
            Perm(begin+1,end);
            Swap(arr[begin],arr[i]);
        }
    }
    

}
int main(){
    clock_t start,end;
    start =clock();
    Perm(0,9);
    end=clock();
    cout<<(double)(end-start)/CLOCKS_PER_SEC<<endl;
    cout<<num<<endl;
    
}