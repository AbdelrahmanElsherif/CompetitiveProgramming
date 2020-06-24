#include<iostream>
using namespace std;

int g[3][3];
int f(int n);
bool check();
int main(){
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		cin.ignore();
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				scanf("%1d", &g[i][j]);
			}
		}
		printf("%d\n", f(0));
	}
}
int f(int n) {
	if (!check()) return -1;

	int h[3][3];

	h[0][0] = (g[0][1] ^ g[1][0]) ;
	h[0][1] = (g[0][0] ^ g[1][1] ^ g[0][2]) ;
	h[0][2] = (g[0][1] ^ g[1][2]);

	h[1][0] = (g[0][0] ^ g[1][1] ^ g[2][0]);
	h[1][1] = (g[0][1] ^ g[1][0] ^ g[1][2] ^ g[2][1]);
	h[1][2] = (g[1][1] ^ g[0][2] ^ g[2][2]) ;

	h[2][0] = (g[2][1] ^ g[1][0]);
	h[2][1] = (g[2][0] ^ g[1][1] ^ g[2][2]);
	h[2][2] = (g[2][1] ^ g[1][2]);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			g[i][j] = h[i][j];
		}
	}
	return 1 + f(n + 1);
}
bool check() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (g[i][j])return true;
		}
	}
	return false;
}
