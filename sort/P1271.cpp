#include<bits/stdc++.h>
using namespace  std;

int a[200000+5];


inline void swap(int &a,int &b){
    int r =a;
    a=b;
    b=r;
}


inline void insert_sort(int * a, int  l ,int r){
    for(int i =l+1;i<=r;i++){
        int j =lower_bound(a,a+i,a[i])-a;
        int t =a[i];
        for(int h = i-1;h>=j;h--){
            a[h+1]=a[h];
        }
        a[j]=t;

    }
}
inline void insert_sort2(int a[], int left, int right)
{
    for (int i = left + 1; i <= right; i++)
        for (int j = i; j > 0 && a[j] < a[j-1]; j--)
            swap(a[j], a[j-1]);
}



void split2(int* a,int l ,int r ,int &i,int&j){
    int  t =rand()%(l-r+1)+l;
    swap(a[r],a[t]);
    i=l-1,j=r;
    int p =l-1,q=r;
    int v =a[r];
    while (true)
    {
        while (a[++i]<v);//从左往右找到第一个大于等于v的,最后一个标兵a[r]==v,所以不是死循环
        while (v<a[--j]){//从右找第一个小于等于v的
            if(j==1) break;
        }

        //i ,j，有序，done
        if(i>=j) break;

        swap(a[i],a[j]);

        if(a[i]==v){
            p++;
            swap(a[p],a[i]);
        }

        if(a[j]==v){
            q--;
            swap(a[j],a[q]);
        }
        
    }
    
    // Move pivot element to its correct index 
    swap(a[i], a[r]); 
  
    // Move all left same occurrences from beginning 
    // to adjacent to arr[i] 
    j = i-1; 
    for (int k = l; k < p; k++, j--) 
        swap(a[k], a[j]); 
  
    // Move all right same occurrences from end 
    // to adjacent to arr[i] 
    i = i+1; 
    for (int k = r-1; k > q; k--, i++) 
        swap(a[i], a[k]); 
}



int split(int* a,int l,int r){
     int p = (r-l)/2+l;
     swap(a[r],a[p]);    
     int x = a[r];

     int  i = l-1;// i指向<=x队列的末尾元素
     for(int  j =l; j<=r-1;j++)//regard  the pivot
     {
         if(a[j]<=x){
             i=i+1;
             swap(a[j],a[i]);  
         }
     }

     swap(a[i+1],a[r]);

     return i+1;   
}

void quick_sort(int* a,int l,int r){
    if((r-l)<=16){
        insert_sort(a,l,r);
        return ;
    }

    if(l<r){
        int i,j;
        split2(a,l,r,i,j);
        quick_sort(a,l,j);
        quick_sort(a,i,r);
    }
}






int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n ;
    cin>>n;
    for(int ui= 0;ui<n;ui++){
        cin>>a[ui];
    }
    // sort(a,a+n);
    quick_sort(a,0,n-1);
    // insert_sort(a,0,n-1);

    for(int i = 0;i <n ;i++){
        cout<<a[i]<<" ";
    }
   
  
}