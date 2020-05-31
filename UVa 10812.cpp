#include <iostream>
int main()
{
	int t; std::cin >> t;
	while (t--) {
		int sum, diff; int l, s;
		std::cin >> sum >> diff;
		if (diff > sum) {
			printf("impossible\n"); continue;
		}
		s = (sum - diff) / 2;
		l = (sum - diff) / 2 +diff;
		if ((l + s) != sum)printf("impossible\n");
		else printf("%d %d\n", l, s);
	}
}
