#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
using namespace std;
#define DEBUG
struct node{
	int l,r;
}a[100005];
int n,m;
inline void addr(int x,int pos){
	a[x].l=pos;
	a[a[pos].r].l=x;
	a[x].r=a[pos].r;
	a[pos].r=x;
}
inline void addl(int x,int pos){
	a[x].r=pos;
	a[a[pos].l].r=x;
	a[x].l=a[pos].l;
	a[pos].l=x;
}
inline void del(int x){
	if(a[x].l==-1) return ;
	a[a[x].l].r=a[x].r;
	a[a[x].r].l=a[x].l;
	a[x].l=-1;
	a[x].r=-1;
}
inline void go(){
	int x=a[0].r;
	while(1)
	{
		cout<<x<<" ";
		if(a[x].r==-1) break;
		x=a[x].r;
	}
}
inline void ini(){
	for(int i=1;i<=n;i++)
		a[i].l=a[i].r=-1;
	a[1].r=-1;
	a[1].l=0;
	a[0].r=1;
}
int main ()
{
#ifdef DEBUG
	freopen("P1160_5.in", "r", stdin);
	freopen("1.out", "w", stdout);
#endif
	scanf("%d",&n);
	int c1,c2;
	ini();
	for(int i=2;i<=n;i++)
	{
		scanf("%d%d",&c1,&c2);
		if(c2==1) addr(i,c1);
		else addl(i,c1);
	}
	scanf("%d",&m);
	
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&c1);
		del(c1);
	}
	go();
	return 0;
}