#include<bits/stdc++.h>
using namespace std;
int arr[1000+1][1000+1];
int lx,ly,rx,ry;
int n,m;

void color(){
    for(int j=lx;j<=rx;j++){
        //差分o(1)
        arr[j][ly]++;
        if(ry+1<=n)
            arr[j][ry+1]--;
    }
}

inline void read(int &x)
{
    char c=getchar();x=0;
    while(c<'0'||c>'9')c=getchar();
    while(c<='9'&&c>='0')x=x*10+c-'0',c=getchar();
}

inline void write(int x)
{
     if(x<0) putchar('-'),x=-x;
     if(x>9) write(x/10);
     putchar(x%10+'0');
}


int main(){
    read(n);read(m);
    for(int i=0;i<m;i++){
       read(lx);read(ly);read(rx);read(ry);
        color();
    }

//  for(int i=1;i<=n;i++){
//         // flag=0;
//         for(int j=1;j<=n;j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//  }

    int flag=0;
    for(int i=1;i<=n;i++){
        flag=0;
        for(int j=1;j<=n;j++) {
            flag+=arr[i][j];
            write(flag);putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}