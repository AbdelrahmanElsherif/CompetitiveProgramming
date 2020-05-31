#include <iostream>
int main()
{
	int n, m, x, y, sheet;
	while (std::cin>>n,n) {
		m = (n % 4) ? (n / 4 + 1) * 4 : n;
		sheet = 1;
		x = 1, y = m;
		printf("Printing order for %d pages:\n", n);
		while (x < y) {
			printf("Sheet %d, front: ", sheet);
			if (y > n) printf("Blank, %d\n", x);
			else printf("%d, %d\n", y, x);
			x++, y--;
			if (n == 1) break;
			printf("Sheet %d, back : ", sheet);
			if (y > n) printf("%d, Blank\n", x);
			else printf("%d, %d\n", x, y);
			x++, y--;
			sheet++;
		}
	}
}
