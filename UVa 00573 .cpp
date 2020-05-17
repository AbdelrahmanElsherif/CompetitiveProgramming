#include <iostream>
int main() {
	int h;float f,u,d;
	while (scanf("%d %f %f %f", &h, &u, &d, &f),h>0)
	{
		int days = 0; float height = 0;
		f =(f/ 100) *u;
		while(1){
			days++;
			height += u;
			if (u > 0) u -= f;
			if (height > h)break;
			height -= d;
			if (height < 0) break;
		}
		if (height > h)
			printf("success on day %d\n", days);
		else printf("failure on day %d\n", days);
		
	}
}
