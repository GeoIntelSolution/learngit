#include<bits/stdc++.h>
using namespace std;
int a[1<<10];

void printarr(int*a ,int n){
    for(int i =1;  i <= n ;i++){
        cout<<a[i]<<" ";
    }
}


struct PrintV {
public:
    void operator()( int & value) {
        cout << value << " ";
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> a;
    for(int i = 0; i<n;i++){
        int c ;
        cin>>c;
        a.push_back(c);
    }
    
    sort(a.begin(),a.end());
    int c=unique(a.begin(),a.end())-a.begin();
    cout<<c<<"\n";
    for_each(a.begin(),a.begin()+c,PrintV());
}