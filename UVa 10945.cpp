#include <iostream>
#include <string>
#include<algorithm>
bool palindrome(std::string input);
std::string edit(std::string input);
int main() {
	std::string input;
	while (getline(std::cin, input),input != "DONE") {
		input = edit(input);
		if (palindrome(input))std::cout<<"You won't be eaten!\n";
		else printf("Uh oh..\n");
	}
}

bool palindrome(std::string input) {
	std::string compare="";
	for (int i = input.length()-1; i >= 0; i--) {
		compare += input[i];
	}
	if (compare == input)return true;
	return false;
}
std::string edit(std::string s) {
	s.erase(remove(s.begin(), s.end(), '.'),s.end());
	s.erase(remove(s.begin(), s.end(), ','), s.end());
	s.erase(remove(s.begin(), s.end(), '!'), s.end());
	s.erase(remove(s.begin(), s.end(), '?'), s.end());
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	for (int i = 0; i <= s.length(); i++) {
		if (s[i] >= 97 && s[i] <= 122) {
			s[i] = s[i] - 32;
		}
	}
	return s;
}