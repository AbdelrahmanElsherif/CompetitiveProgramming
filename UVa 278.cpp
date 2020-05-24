#include <iostream>
int main() 
{
	int t;
	scanf("%d\n", &t);
	char c;
	int M, N;
	while(t--) {
		scanf("%c %d %d\n", &c, &M, &N);
		int answer = 0;
		if (c == 'r')
			answer = M > N ? N : M;
		
		else if (c == 'Q') 
			answer = M > N ? N : M;
		
		else if (c == 'k') 
			answer = (((M + 1) / 2) * ((N + 1) / 2)) + (((M) / 2) * ((N) / 2));
		
		else if (c == 'K') 
			answer = (((M + 1) / 2) * ((N + 1) / 2));
		
		printf("%d\n", answer);
	}
	
}