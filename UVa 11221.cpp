#include <iostream>
#include <string>
#include <math.h>
int main() {
	int t;
	scanf("%d", &t); std::cin.ignore();
	for(int t1=1 ;t1<=t; t1++) {

		std::string input, input1;
		getline(std::cin, input1);
		for (int i = 0; i < input1.length(); i++) {
			if (isalpha(input1[i]))
				input += input1[i];
		}

		int k = sqrt(input.length());
		if(k*k!= input.length()){
			printf("Case #%d:\n", t1);
			printf("No magic :(\n");
			continue;
		}
		bool palindrome = true;
		char **p = new char*[k];
		
		for (int i = 0; i < k; i++) 
			p[i] = new char[k];
		
		int cnt = 0;
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++)
				p[i][j] = input[cnt++];
		}


		for (int i = 0,cnt=0; i < k&&palindrome; i++) {
			for (int j = 0; j < k; j++,cnt++) {
				if (input[cnt] != p[j][i] || input[cnt] != p[k - j - 1][k - i - 1] || input[cnt] != p[k - i - 1][k - j - 1]) {
					palindrome = false; break;
				}
			}
		}
		if (palindrome) {
			printf("Case #%d:\n", t1);
			printf("%d\n", k);
		}
		else {
			printf("Case #%d:\n", t1);
			printf("No magic :(\n");
		}
		for (int i = 0; i < k; ++i) {
			delete[] p[i];
		}
		delete[] p;
	}
}
