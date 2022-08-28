#include <iostream>
#include <string>
#include <locale>

int main(int argc, char const *argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int i = 1; i < argc; ++i) {
			std::string str = argv[i];
			for (int i = 0; i < str.length(); ++i) {
				std::cout << (char)std::toupper(str[i]);
			}
		}
	}
	std::cout << "\n";
	return 0;
}
