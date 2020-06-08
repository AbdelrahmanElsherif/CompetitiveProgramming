#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		int k; cin >> k;
		map <char, double > dic;
		while (k--) {
			char c; double d;
			cin >> c >> d;
			dic[c] = (d/100);
		}
		int m;
		cin >> m; cin.ignore();
		string input; double cost = 0;
		while (m--) {
			getline(cin, input);
			for (int i = 0; i < input.size(); i++) cost += dic[input[i]];
		}
		printf("%.2f$\n", cost);
	}
}
