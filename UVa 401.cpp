#include <iostream>
#include <string>
bool palindrome(std::string input);
bool mirrored(std::string input);
char reverse(char c);
int main() {
	std::string input;
	while (std::cin >> input) {
		if (mirrored(input)) { if(palindrome(input))std::cout<<input<<" -- is a mirrored palindrome.\n\n";
		else { std::cout << input << " -- is a mirrored string.\n\n"; }
		}
		else if (palindrome(input)) { std::cout << input << " -- is a regular palindrome.\n\n"; }
		else { std::cout << input << " -- is not a palindrome.\n\n"; }
	}
}
char reverse(char c) {
	if (c == 'E')return '3';
	if (c == 'J')return 'L';
	if (c == 'L')return 'J';
	if (c == 'S')return '2';
	if (c == 'Z')return '5';
	if (c == '2')return 'S';
	if (c == '3')return 'E';
	if (c == '5')return 'Z';
	if (c == '0'||c=='O')return 'O';
	if (c == 'A')return 'A';
	if (c == 'H')return 'H';
	if (c == 'I')return 'I';
	if (c == 'M')return 'M';
	if (c == 'T')return 'T';
	if (c == 'U')return 'U';
	if (c == 'V')return 'V';
	if (c == 'W')return 'W';
	if (c == 'X')return 'X';
	if (c == 'Y')return 'Y';
	if (c == '1')return '1';
	if (c == '8')return '8';
	else return '0';
	
}
bool mirrored(std::string input) {
	for (int i = input.length() - 1,j=0;j<input.length()/2; i--,j++) {
		if (input[j] == reverse(input[i]))continue;
		return false;
	}
	if(input.length()==1)if (input[0] != reverse(input[0]))return false;
	return true;
};
bool palindrome(std::string input) {
	std::string compare="";
	for (int i = input.length()-1; i >= 0; i--) {
		compare += input[i];
	}
	if (compare == input)return true;
	return false;
};