#include<iostream>
int main() {
	int s, b; int left[100001];
	int right[100001];
	while (std::cin>>s>>b,s) {
		int L, R;
		for (int i = 1; i <= s; i++)
		{
			left[i] = i - 1;
			right[i] = i + 1;
		}

		right[s] = 0;
		for (int i = 0; i < b; i++) {
			std::cin >> L>>R;
			right[left[L]] = right[R];
			left[right[R]] = left[L];

			if (left[right[R]] == 0) printf("* ");
			else printf("%d ", left[right[R]]);
			if (right[left[L]] == 0) printf("*\n");
			else printf("%d\n", right[left[L]]);
		}
		printf("-\n");
	}
	return 0;
}