#include<bits/stdc++.h>
using namespace std;

string a[1000];
string b[1000];

int solve(int n,int m){
    if(n<m) {cout<<"Wrong param"; return -1;}
    if(n==m||m==0)
       return 1;
    if(m==1||m==n-1)
        return n;    
    if(n-m<m){
        return solve(n,n-m);
    }

    return solve(n-1,m)+solve(n-1,m-1);
}

inline string* getPrevArr(int i){
    if((i%2)!=0){
        return a;
    }else{
        return b;
    }
}

inline string* getCurArr(int i){
    if((i%2)!=0){
        return b;
    }else{
        return a;
    }
}

string addValue(const string &a, const string &b) {
	string res;
	int l = a.size();
	int r = b.size();
	int mini = min(l, r);
	int carry = 0;
	for (int i = 0; i < mini; i++) {
		int x = a.at(l - i - 1) - '0';
		int y = b.at(r - i - 1) - '0';
		x = x + y + carry;
		res += x % 10 + '0';
		carry = x / 10;
		
	}

	if (l != mini) {
		for (int i = l - mini - 1; i >= 0; --i) {
			int x = a.at(i) - '0';
			x = x + carry;
			carry = (x) / 10;
			res += (x) % 10+'0';
		}
	}
	else {
		for (int i = r - mini - 1; i >= 0; --i) {
			int x = b.at(i) - '0';
			x += carry;
			carry = (x ) / 10;
			res += (x ) % 10+'0';
		}
	}

	if (carry) {
		res +=  carry+'0';
	}

	string s(res.rbegin(), res.rend());
	return     s;
}


string CRr(int n,int m){
    a[0]="1";
    for(int i=1;i<=n;i++){
        for(int j = 0;j<=i&&j<=m;j++){
            // C(i,j);
            string* prev=getPrevArr(i);
            string* cur=getCurArr(i);
            if(j==0||j==i){
                cur[j]="1";
            }
            else if(j==1||j==i-1){
                cur[j]=""+i;
            }else{
                cur[j]=addValue(prev[j-1],prev[j]);
            }

        }
    }

    return getCurArr(n)[m];

}



int main(){
    cout<<addValue("11111","9999");
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m);    
}