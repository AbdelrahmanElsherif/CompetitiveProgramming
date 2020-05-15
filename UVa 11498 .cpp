#include <iostream>

int main() {
	int k;
	while(scanf("%d", &k),k)
	{
		int ox, oy;
		scanf("%d %d", &ox, &oy);
		for (int i = 0; i < k; i++) {
			int sx, sy;
			scanf("%d %d", &sx, &sy);
			if (sx > ox && sy > oy) printf("NE\n");
			else if (sx > ox && sy < oy) printf("SE\n");
			else if (sx < ox && sy > oy) printf("NO\n");
			else if (sx < ox && sy < oy) printf("SO\n");
			else printf("divisa\n");
		}
	}
}