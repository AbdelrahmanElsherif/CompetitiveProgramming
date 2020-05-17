#include <iostream>
int main() {
	int t;
	while (scanf("%d", &t)!=EOF)
	{
		for (int i = 0; i < t; i ++) 
		{
			int n; int max = 0;
			scanf("%d", &n);
			for (int j = 0; j < n;j++) {
				int speed;
				scanf("%d", &speed);
				if (max < speed) {
					max = speed;
				}
			}
			printf("Case %d: %d\n", i+1, max);
		}
	}
}