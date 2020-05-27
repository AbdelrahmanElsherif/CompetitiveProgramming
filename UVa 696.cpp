#include <iostream>
int main() {
	int m, n;
	while (scanf("%d %d", &m, &n), m) {
		int out=0;
		if (n >= m) {
			if (m == 1)out = n;
			else if (m == 2)out = 4 * (n / 4) + 2 * (2 > (n % 4) ? (n % 4) : 2);
			else  out = (m*n+1)/2;
		}
		if (m > n) {
			if (n == 1)out = m;
			else if (n == 2)out = 4 * (m / 4) + 2 * (2 > (m % 4) ? (m % 4) : 2);
			else  out = (m * n + 1 )/ 2;
		}
		printf("%d knights may be placed on a %d row %d column board.\n", out, m, n);
	}
}