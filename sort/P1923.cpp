#include<bits/stdc++.h>
using namespace std;
const int maxn =5000000;

int a[maxn];

void swap(int *x,int  *y);


int partition(int arr[],int l ,int r);

int kthSmallest(int arr[],int l ,int r,int k){
    if(k>=0&&k<=r-l+1){
        int pos = partition(arr,l,r);
        if(pos-l == k)
            return arr[pos];
        if(pos-l>k){
            return kthSmallest(arr,l,pos-1,k);
        }

        return kthSmallest(arr,pos+1,r,k-pos+l-1);
    }
    return INT_MAX;    
}


void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

int partition(int arr[],int l ,int r){
        if(l==r) return l;
        int x  =arr[r],i= l-1;
        for(int j=l;j<=r-1;j++){
            if(arr[j]<x){
                i=i+1;
                swap(&arr[i],&arr[j]);
            }
        }
        swap(&arr[i+1],&arr[r]);
        return i+1;
}  


void printarr(int* a ,int n){
    for(int i  =0 ; i< n ;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void test(){
    int b[5] ={4,3,2,1,5};
    for(int i =0 ;i<=5;i++){
        cout<<kthSmallest(b,0,4,i)<<" ";
    }
}



int main(){
    // test();
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    cout<<kthSmallest(a,0,n-1,k)<<endl;
}
