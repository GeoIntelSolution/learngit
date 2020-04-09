#include<bits/stdc++.h>
using namespace std;

int arr[4]={1,2,3};

void print_subset(int n){
    for(int i=0;i<(1<<n);i++){
        for(int j =0 ;j<n;j++){
            if(i&(1<<j))
                cout<<arr[j]<<" ";
        }
        cout<<"\n";
    }

}

int main(){
    int n;
    cin >>n;
    print_subset(n);
    return 0;
  
}