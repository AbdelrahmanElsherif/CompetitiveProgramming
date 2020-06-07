#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, tmp; int f, s; 
	while (cin >> n) {
		vector<int> v(n); vector<int> vv(n);
		for (int i = 0; i < n; i++) {
			v[i] = i;
		}
		 cin >> f;
		for (int i = 0; i < n-1; i++) {
			cin >> s;
			vv[i]=(abs(f - s));
			f = s;
		}
		sort(vv.begin(), vv.end());
		bool jolly=true;
		for (int i = 0; i < v.size(); i++)if (v[i] != vv[i]) { jolly = false; break;}
		if (jolly)cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
}