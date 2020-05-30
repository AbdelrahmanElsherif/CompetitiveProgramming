#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
char edit(char s);
bool comp(const char& lhs, const char& rhs);
int main()
{
	int T; cin >> T;
	string input;
	while (T--)
	{
		cin >> input;
		sort(input.begin(), input.end(),comp);
		cout << input << '\n';
		while (next_permutation(input.begin(), input.end(), comp)) {
			cout << input << '\n';
		}
	}
}
bool comp(const char& lhs, const char& rhs){	
	if (edit(lhs) == edit(rhs))
		return lhs < rhs;
	else
		return edit(lhs) < edit(rhs);
}
char edit(char s) {
	if (s >= 97 && s <= 122)
			s = s - 32;
	return s;
}