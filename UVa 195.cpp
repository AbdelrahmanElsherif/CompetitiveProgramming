#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
int main(){
	int t; std::cin>>t;std::vector<std::string> output;
	while (t--) {
		std::vector<std::string> v;
		std::string input;
		std::cin >> input;
		std::sort(input.begin(), input.end());
		v.push_back(input);
		while (next_permutation(input.begin(), input.end())){
			v.push_back(input);
		}
		std::sort(v.begin(), v.end());
		output.insert(output.end(), v.begin(), v.end());
	}
	for (auto &i : output)
		std::cout << i << "\n";
}