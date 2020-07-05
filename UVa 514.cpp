#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
	int n;
	while (cin >> n, n) {
		vector <int> v(n);
		for (int i = 0; i< n; i++) v[i]=i+1;
		vector<int> vv(n);
		while (cin >> vv[0], vv[0]) {
			for (int i = 1; i < n; i++) cin >> vv[i];
			int vi=0, vvi=0;
			stack<int> s;
			while (true) {
				if (!s.empty() && s.top() == vv[vvi]) {
					s.pop(); vvi++;
					continue;
				}
				if (vi >= n)break;
				s.push(v[vi++]);
			}
			if (s.empty())cout << "Yes\n";
			else cout << "No\n";
		}
		cout << "\n";
	}
}