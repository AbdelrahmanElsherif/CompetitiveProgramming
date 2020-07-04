#include <iostream>
#include <bitset>
using namespace std;
int main() {
	int n;
	while(cin >> n,n){
		bitset<32> bits = n;
		bitset<32> a;
		bitset<32> b;
		bool even = true;
		for (int i = 0; i < 32; i++) {
			if (bits[i] == 1 && even) {
				even = false; a[i] = 1; b[i] = 0;
			}
			else if (bits[i] == 1 && !even) {
				even = true; b[i] = 1; a[i] = 0;
			}
			else {
				a[i] = 0;
				b[i] = 0;
			}
		}
		cout << a.to_ulong() << " " << b.to_ulong() << "\n";
	}
}