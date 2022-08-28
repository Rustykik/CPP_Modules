#include <string>
#include <iostream>

using namespace std;

int main(void) {
	string s =  "HI THIS IS BRAIN";

	string* stringPTR = &s;

	string& stringREF = s;

	cout << "The memory address of the string variable " << endl << &s << endl;
	cout << "The memory address held by stringPTR " << endl  << stringPTR << endl;
	cout << "The memory address held by stringREF "  << endl << &stringREF << endl;
	cout << endl;
	cout << "The value of the string variable. " << endl  << s << endl;
	cout << "The value pointed to by stringPTR. " << endl  << *stringPTR << endl;
	cout << "The value pointed to by stringREF." << endl  << stringREF << endl;

	return 0;
}