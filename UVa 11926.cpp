/*#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<pair<pair<int, int>, pair<char, int>>> v; vector<pair<int, pair<int, int>>> vv;
	int problem, time, team; char state;
	for (int i = 0; i < n; i++) {
		cin.ignore();
		while (cin >> team >> problem >> time >> state) {
			if (team == 0)break;
			if (state == 'C')
				v.push_back(make_pair(make_pair(team, problem), make_pair(state, time)));
			else if (state == 'I') {
				state = 'A'; v.push_back(make_pair(make_pair(team, problem), make_pair(state, time)));
			}
			else vv.push_back(make_pair(team, make_pair(0, 0)));
		}
		sort(v.begin(), v.end());
		int cnt = 0; int timesum=0; int problemsum=0;
		for (int j = 0; j < v.size(); j++) {
			if (j == 0) {
				if (v[j].second.first == 'A')cnt = 1;
				else {
					timesum = v[j].second.second; problemsum++; vv.push_back(make_pair(v[j].first.first, make_pair(problemsum, timesum)));
				}
			}
			else if (v[j].first.first == v[j - 1].first.first &&  v[j].first.second == v[j - 1].first.second) {
				if (v[j].second.first == 'A')cnt++;
				else {
					timesum = v[i].second.second + 20 * cnt; problemsum++; vv.push_back(make_pair(v[j].first.first, make_pair(problemsum, timesum)));
				}
			}
			else if (v[j].first.first == v[j - 1].first.first &&  v[j].first.second != v[j - 1].first.second) {
				if (v[j].second.first == 'A')cnt = 1;
				else {
					timesum = v[j].second.second; problemsum++; vv.push_back(make_pair(v[j].first.first, make_pair(problemsum, timesum)));
				}
			}
			else if (v[j].first.first != v[j- 1].first.first) {
				problemsum = 0;
				cnt = 0;
				vv.push_back(make_pair(v[j].first.first, make_pair(0, 0)));
				if (v[j].second.first == 'A')cnt = 1;
				else {
					timesum = v[j].second.second; problemsum++; vv.push_back(make_pair(v[j].first.first, make_pair(problemsum, timesum)));
				}
			}
		}
		for (int j = 0; j < vv.size(); j++) {
			cout << vv[j].first << " " << vv[j].second.first << " " << vv[j].second.second << "\n";
		}
	}
}
*/
#include<iostream>
#include<bitset>
using namespace std;
int main() {
	int n, m; bitset<1000001> b; bool c;
	while ((cin >> n >> m), n||m){
		c = false;
		b.reset();
	for (int i = 0; i < n; i++) {
		int begin, end;
		cin >> begin >> end;
		for (int i = begin; i< end; i++)
		{
			if (b.test(i))
			{
				c = true; break;
			}
			else
				b.set(i);
		}
	}
	for (int i = 0; i < m; i++) {
		int begin, end, duration;
		cin >> begin >> end >> duration;
		while (begin <= 1000000){
			for (int i = begin; i < end; i++){
				if (b.test(i))
				{
					c = true;break;
				}
				else
					b.set(i);
			}

			begin += duration;
			if (end + duration > 1000000)
				end = 1000000;
			else
				end += duration;
		}
	}
	if (c) printf("CONFLICT\n");
	else printf("NO CONFLICT\n");
	}
}