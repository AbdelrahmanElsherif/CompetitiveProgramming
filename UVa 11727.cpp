#include <iostream>
int main() {
	short k;
	scanf("%hd", &k);
		for (short i = 1; i <= k; i++) {
			int x,y,z;
			scanf("%d %d %d", &x, &y, &z);
			if ((x < y && y < z) || (z < y && y < x))
				printf("Case %hd: %d\n", i, y);
			else if ((y < x && x < z) || (z < x && x < y))
				printf("Case %hd: %d\n", i, x);
			else
				printf("Case %hd: %d\n", i, z);
		}
}