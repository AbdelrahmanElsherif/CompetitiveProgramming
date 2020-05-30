#include <iostream>
#include <string>
#include<algorithm>
#include<sstream>
std::string edit(std::string s);
int main() {
	std::string input; std::string words[1000], words2[1000]; std::string output[1000]; int cnt3 = 0, cnt = 0;
	while (getline(std::cin, input), input != "#") {
		std::istringstream iss(input);
		for (std::string input; iss >> input; cnt++)
			words[cnt] = input;
	}
	for (int l=0; l < cnt; l++) {
		words2[l] = words[l];
		words[l] = edit(words[l]);
		std::sort(words[l].begin(), words[l].end());
	}
	for (int i = 0; i < cnt; i++) {
		int cnt2 = 0;
		for (int j = 0; j < cnt; j++) {
			if (words[i] == words[j])cnt2++;
		}
		if (cnt2 == 1)output[cnt3++] = words2[i];
	}
	std::sort(output, output + cnt3);
	for (int i = 0; i < cnt3; i++)
		std::cout << output[i] << "\n";
}
std::string edit(std::string s) {
	for (int i = 0; i <= s.length(); i++) {
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return s;
}