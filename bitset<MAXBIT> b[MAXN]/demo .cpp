Problem : https://codeforces.com/contest/1166/problem/E

Arpa's solution, where he used bitset.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e4 + 14;
int n, m;
bitset<maxn> a[maxn];
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> m >> n;
	for(int i = 0; i < m; i++){
		int s;
		cin >> s;
		while(s--){
			int x;
			cin >> x;
			a[i][--x] = 1;
		}
		for(int j = 0; j < i; j++)
			if((a[j] & a[i]).count() == 0)
				return cout << "impossible\n", 0;
	}
	cout << "possible\n";
}
