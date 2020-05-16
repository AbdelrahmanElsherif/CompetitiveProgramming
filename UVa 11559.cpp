#include <iostream>
int main() {
	int n; int b; int h; int w;
	while (scanf("%d %d %d %d", &n, &b, &h, &w)==4)
	{
		int t=b+1;
		for (int i = 0; i < h; i ++) 
		{
			int hotel;
			scanf("%d", &hotel);
			for (int j = 0; j < w;j++) {
				int week;
				scanf("%d", &week);
				if (week >= n && t >= n*hotel) {
					t = n * hotel;
				}
			}
		}
		if (t<=b)printf("%d\n", t);
		else printf("stay home\n");
	}
}