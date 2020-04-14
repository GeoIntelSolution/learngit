#include<bits/stdc++.h>
using namespace std;
const int maxn=1000+1;
int arr[maxn];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];

    //交换排序次数
    int c=0;
    for(int i=1;i<n;i++){
        int j=i;
        while (j>0&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
            c++;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    //     if(i==n-1){
    //         cout<<endl;
    //     }
    // }
    cout<<c<<endl;
}
