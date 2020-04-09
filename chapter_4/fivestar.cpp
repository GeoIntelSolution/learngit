#include<bits/stdc++.h>
using namespace std;

int star[11]={0,1,2,3,4,5,6,7,8,9,10};
#define A (star[1]+star[3]+star[6]+star[9])
#define B (star[1]+star[4]+star[8]+star[10])
#define C (star[2]+star[3]+star[4]+star[5])
#define D (star[2]+star[6]+star[7]+star[10])
#define E (star[5]+star[8]+star[7]+star[9])

inline void swap(int &x ,int &y)
{
    int t=x;
    x=y;
    y=t;
}

int num=0;
void Perm(int begin,int end){
    if(begin==end){
        if(A==B&&C==D&&A==C&&A==E){
            for(int i=1;i<=10;i++){
                cout<<star[i]<<" ";
            }
            cout<<endl;
            num++;
        }
    }else{
        for(int i=begin;i<=end;i++){
            swap(star[begin],star[i]);
            Perm(begin+1,end);
            swap(star[begin],star[i]);
        }
    }

}


int main(){
    Perm(1,10);
    cout<<num<<endl;
    cout<<num/10<<endl;
}