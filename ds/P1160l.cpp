#include<iostream>
#include<algorithm>
#include<list>
#define DEBUG
using namespace std;


list<int> li;
list<int>::iterator arr[100000 + 1];
bool brr[100000+1];
void printlist(const list<int>& li) {
	for_each(li.begin(), li.end(), [](int val) {cout << val << " "; });
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifdef DEBUG
	freopen("P1160_5.in", "r", stdin);
	freopen("1.out", "w", stdout);
#endif
	li.push_back(1);
	arr[1] = li.begin();
	int n, k, p, m, x;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		cin >> k >> p;
		auto it = arr[k];
		if (p == 0) {
			arr[i] = li.insert(it, i);
		}
		else {
			arr[i] = li.insert(next(it), i);
		}
	}

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		auto it = arr[x];
        if(!brr[x]){
		    li.erase(arr[x]);
            brr[x]=true;
        }
	}
	printlist(li);
	return 0;


}

