#include<bits/stdc++.h>
using namespace std;

int arr[4]={1,2,3,4};

void print_subset(int n,int k){
    for(int i=0;i<(1<<n);i++){
        int num =0,kk=i;
        while (kk)
        {
            kk=kk&(kk-1);
            num++;
        }

        if(num==k){
            for(int j = 0 ;j<n;j++)
                if(i&(1<<j)){
                    cout<<arr[j]<<" ";
                }
                cout<<"\n";
        }
        
    }

}

int main(){
    int n,k;
    cin >>n>>k;
    print_subset(n,k);
    return 0;
  
}