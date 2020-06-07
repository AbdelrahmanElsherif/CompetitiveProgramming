#include<iostream>
#include<vector>
using namespace std;
int main() {
	int m;
	cin >> m;
	while (m--) {
		cin.ignore();
		int k, n;
		cin >> n >> k;
		vector<bool> p(n+1,true);
		for (int i = 0; i < k; i++) {
			int left;
			cin >> left; vector<int> pp(2*left+1);
			for (int j = 1; j < 2 * left +1; j++) {
				int index;
				cin >> index;
				pp[j] = index;
			}
			char op;
			cin >> op;
			//if (op == '>') for (int j = left + 1; j < 2 * left+1; j++) p[pp[j]] = false;
			//else if (op == '<') for (int j = 1; j < left+1; j++) p[pp[j]] = false;
			/*else*/if(op=='=') for (int j = 1; j < 2 * left+1; j++)p[pp[j]] = false;
		}
		int cnt = 0; int index = 0;
		for (int i = 1; i < n+1; i++) 
			if (p[i] == true) {
				cnt++; index = i;
		}
		if (cnt == 1)  cout << index << "\n";
		else  cout << "0\n"; 
		if (m)cout << "\n";
	}
}