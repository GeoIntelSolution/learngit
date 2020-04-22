// int N,M;
// int arr[maxn],Log2[maxn];//原始数组
// int f[maxn][20];//F[i][j]:arr[i~i+2^j-1]的最大值

// void ST_init(){//初始化所有长度为2^x的区间最大值
//     for(int i=1;i<=N;i++) Log2[i]=log(i)/log(2);;//初始化log求值,之后O(1)取值
//     for(int i=1;i<=N;i++) f[i][0]=arr[i];
//     int len = log(N)/log(2)+1;
//     for(int j=1;j<len;j++){
//         for(int i=1;i<=N-(1<<j)+1;j++){
//             f[i][j]= max(f[i][j-1],f[i+(1<<(j-1))[j-1]]);
//         }
//     }
// }

// int query(int l,int r){
//     //查询arr[l~r]区间的最值
//     int k =Log2[r-l+1];
//     return max(f[l][k],f[r-(1<<k)+1][k]);
// }