#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int> p, vector<int> q, int i);
int main() {
	int t; int n;
	cin >>t;
	int cnt =1;
	while((t--)&&(cnt++)){
		cin >> n;
		vector<int> p(n); vector<int> q(n); long int sump = 0, sumq = 0; bool possible = true; int index;
		for (int i = 0; i < n; i++) {
			cin >> p[i]; sump += p[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> q[i]; sumq += q[i];
		}
		if (sumq > sump) {
			possible = false;
		}
		if (possible) {
			for (int i = 0;i < n; i++) {
				if ((p[i] >= q[i])&&check(p,q,i)) { index = i; break; }
			}
		}
		if (possible) cout << "Case " << cnt-1 << ": Possible from station " << index+1<<"\n";
		else cout << "Case " << cnt-1 << ": Not possible\n";
	}
}
bool check(vector<int> p, vector<int> q, int i) {
	int rem = 0;
	for (int j = 0; j < p.size(); j++) {
		rem += p[(j + i) % p.size()] - q[(j + i) % p.size()];
		if (rem < 0)return false;
	}
	return true;
}