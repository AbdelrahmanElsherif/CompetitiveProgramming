#include<iostream>
#include<vector>
bool compare(std::vector<std::vector<char>> s, std::vector<std::vector<char>> t,int n);
std::vector<std::vector<char>> divide(std::vector<std::vector<char>> input,int N,int n,int fi,int fj);
std::vector<std::vector<char>> rotate(std::vector<std::vector<char>> input, int n);
int main() {
	int N, n;
	while ((std::cin >> N>> n),N) {
		std::vector<std::vector<char>> f(N,std::vector<char>(N));
		std::vector<std::vector<char>> s(n,std::vector<char>(n));
		std::vector<std::vector<char>> s2(n, std::vector<char>(n));
		std::vector<std::vector<char>> s3(n, std::vector<char>(n));
		std::vector<std::vector<char>> s4(n, std::vector<char>(n));
		int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				std::cin >> f[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				std::cin >> s[i][j];
			}
		}
		s2 = rotate(s, n);
		s3 = rotate(s2, n);
		s4 = rotate(s3, n);
		for (int i = 0; i <= N-n; i++) {
			for (int j = 0; j <= N-n; j++) {
				std::vector<std::vector<char>> inp(n, std::vector<char>(n));
				inp = divide(f, N, n, i, j);
				if (compare(inp, s, n)) cnt1++;
				if (compare(inp, s2, n)) cnt2++;
				if (compare(inp, s3, n)) cnt3++;
				if (compare(inp, s4, n)) cnt4++;
			}
		}
		
		std::cout << cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt4 << "\n";
	}
}
bool compare(std::vector<std::vector<char>> s, std::vector<std::vector<char>> t,int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (s[i][j] != t[i][j])return false;
		}
	}
	return true;
}
std::vector<std::vector<char>> divide(std::vector<std::vector<char>> input,int N, int n, int fi,int fj) {
	std::vector<std::vector<char>> output(n, std::vector<char>(n));
	for (int i = fi,ii=0 ; ii<n; ii++,i++) {
		for (int j = fj,jj=0; jj < n; jj++,j++) {
			output[ii][jj] = input[i][j];
		}
	}
	return output;
}

std::vector<std::vector<char>> rotate(std::vector<std::vector<char>> input, int n) {
	std::vector<std::vector<char>> output(n, std::vector<char>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			output[j][n-1-i] = input[i][j];
		}
	}
	return output;
}