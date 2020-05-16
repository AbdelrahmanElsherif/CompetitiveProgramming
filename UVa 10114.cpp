#include <iostream>
int main() {
	int months;
	float down, total;
	short k;
	while (scanf("%d %f %f %hd",&months,&down,&total, &k), months>0)
	{
		float *arr = new float [months];
		for (int i = 0; i < k; i++) {
			int a; float per;
			scanf("%d %f", &a, &per);
			for (int j = a; j < months; j++) {
				arr[j] = per;
			}
		}
		int i = 0;
		float monthly = total / months;
		float value = down + total;
		value -= value * arr[0];
		while (value < total) {
			i++;
			value -= value * arr[i];
			total -= monthly;
		}
		if (i == 1)printf("1 month\n");
		else printf("%d months\n",i);
		delete[] arr;
	}
}