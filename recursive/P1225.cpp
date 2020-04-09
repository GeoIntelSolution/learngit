#include<bits/stdc++.h>
using namespace std;

int solve(int n){
   if(n==1) return 1; 
   if(n==2) return 2;
   return solve(n-1)+solve(n-2);
}

string addValue(const string& a, const string& b) {
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
			res += (x) % 10 + '0';
		}
	}
	else {
		for (int i = r - mini - 1; i >= 0; --i) {
			int x = b.at(i) - '0';
			x += carry;
			carry = (x) / 10;
			res += (x) % 10 + '0';
		}
	}

	if (carry) {
		res += carry + '0';
	}

	string s(res.rbegin(), res.rend());
	return     s;
}


string solution(int n){
    string a("1"),b=("2"),t("0");
    if(n<=0) return t;
    if(n==1) return a;
    if(n==2) return b;
   
    for(int i=3;i<=n;i++){
        t=b;
        b=addValue(a,b);
        a=t;
		// cout<<b<<endl;
    }
    return b;
}

int main(){

	// cout<<addValue("9999","1")<<endl;
    int n;
    cin>>n;
    cout<<solution(n);

}
