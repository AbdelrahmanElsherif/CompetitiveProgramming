#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> w; vector<int> potencies;
		for (int i = 0; i < 1 << n; i++)
		{
			int weight;
			cin >> weight;
			w.push_back(weight);
		}
	
		for (int i = 0; i < 1 << n; i++)
		{
			int potency = 0;
			for (int j = 0; j < n; ++j)
				potency += w[i ^ (1 << j)];
			potencies.push_back(potency);
		}
		int sum = 0;
		for (int i = 0; i < 1 << n; i++)
		{
			for (int j = 0; j < n; j++)
				sum = max(sum, potencies[i] + potencies[i ^ (1 << j)]);
		}
		cout << sum << "\n";
	}
}