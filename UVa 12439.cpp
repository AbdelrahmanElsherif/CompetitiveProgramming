#include <iostream>
#include<string>
int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::string m1, m2;
		int d1, d2, y1, y2;
		char com, cmma;
		std::cin >> m1 >> d1 >> com >> y1;
		std::cin >> m2 >> d2 >> cmma >> y2;
		int cnt = 0;

		if (m1 == "January" || ((m1 == "February") && (d1 <= 29)))
			y1--;

		if ((m2 != "January" && (m2 != "February")) || ((m2 == "February") && (d2 >= 29)));
		else y2--;

		cnt = y2 / 4 - y2 / 100 + y2 / 400 - (y1 / 4 - y1 / 100 + y1 / 400);
		std::cout << "Case " << i + 1 << ": " << cnt << "\n";
	}
}
