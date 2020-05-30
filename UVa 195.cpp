#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	string input;
	getline(cin, input);
	while (t--) {
		vector<string> v, copy;
		while (getline(cin, input) && input != "")
		{
			v.push_back(input); copy.push_back(input);
		}
		sort(v.begin(), v.end());
		sort(copy.begin(), copy.end());
		for (int i = 0; i < copy.size(); i++) {
			copy[i].erase(remove(copy[i].begin(), copy[i].end(), ' '), copy[i].end());
			sort(copy[i].begin(), copy[i].end());
		}
		
		for (int i = 0; i < v.size(); i++) {
			for (int j = i+1; j < v.size(); j++) {
				if (copy[i] == copy[j])cout << v[i] << " = " << v[j] << "\n";
			}
		}
		if (t) cout << "\n";
	}
}
