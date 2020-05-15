#include <iostream>
int main()
{
	short l;
	scanf("%hd", &l);
	for (short i = 0; i < l; i++) {
		long long a, b;
		scanf("%lld %lld", &a, &b);
		if (a > b) printf(">\n");
		else if (a < b) printf("<\n");
		else printf("=\n");
	}
}