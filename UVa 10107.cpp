#include<iostream>
#include<vector>
#include<algorithm>
int main() {
	int n = 0; unsigned long long int input;
	std::vector<unsigned long long int> arr;
	std::cin >> input;
	arr.push_back(input);
	std::cout << input << "\n";
	while (std::cin >> input) {
		arr.push_back(input);
		n++;
		std::sort(arr.begin(), arr.end());
		unsigned long long int med;
		if (n % 2 == 0) { med = arr[n / 2]; }
		else {
			med = (arr[(n + 1) / 2] + arr[(n - 1) / 2]) / 2;
		}
		std::cout << med << "\n";
	}
}