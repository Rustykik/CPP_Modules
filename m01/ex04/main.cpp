#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

string doReplace(string line, string was, string will) {
	stringstream editedLine;
	size_t total_len = line.length();

	for (size_t i = 0; i < total_len; ++i) {

		if (i + was.length() <= total_len &&
				(line.substr(i, was.length()).compare(was) == 0)) {
			editedLine << will;
			i += was.length() - 1;
		}
		else editedLine << line[i];
	
	}
	return editedLine.str();
}

int replaceStrings( ifstream &inputFile,
					ofstream &outputFile,
					string was,
					string will ) {
	string line;

	while (getline(inputFile, line)) {
		outputFile << doReplace(line, was, will);
		if (inputFile.eof()) {
			break;
		}
		outputFile << endl;
	}
	inputFile.close();
	outputFile.close();
	return 0;
}

int checkInput(int argc, char **argv) {
	if (argc != 4) {
		cout << "wrong input" << endl;
		return 1;
	}
	if (string(argv[2]).length() == 0 || 
			string(argv[3]).length() == 0) {
		cout << "input strings shouldn't be empty" << endl;
		return 1;
	}
	return 0;
}

int main(int argc, char **argv) {

	ifstream inputFile;
	ofstream outputFile;

	if (checkInput(argc, argv))
		return 1;

	inputFile.open(argv[1]);
	if (!inputFile.is_open()) {
		cout << "cannot open " << argv[1] << endl;
		return 1;
	}
	
	string outputName = argv[1] + string(".replace");
	outputFile.open(outputName.data());
	if (!outputFile.is_open()) {
		inputFile.close();
		cout << "cannot create " << outputName << endl;
		return 1;
	}

	replaceStrings(inputFile, outputFile, argv[2], argv[3]);

	return 0;
}