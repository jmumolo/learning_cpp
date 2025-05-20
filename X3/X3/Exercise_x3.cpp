#include <stdlib.h>
#include <iostream>
#include <limits>

int main() {
	using namespace std;
	bool varbool = NULL;
	char varchar = NULL;
	int varint = NULL;
	double vardouble = NULL;
	string varstring;

	cout << "Hello World!\n\n";

	//Input and output of boolean
	cout << "Please enter a boolean: ";
	
	while (!(std::cin >> varbool)) {
		std::cout << "Invalid input. Please enter a boolean: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "You entered: " << varbool << std::endl;

	//Input and output of char
	cout << "Please enter a char: ";

	while (!(std::cin >> varchar)) {
		std::cout << "Invalid input. Please enter a char: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "You entered: " << varchar << std::endl;

	//Input and output of integer
	cout << "Please enter an integer: ";

	while (!(std::cin >> varint)) {
		std::cout << "Invalid input. Please enter an integer: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "You entered: " << varint << std::endl;

	//Input and output of a double
	cout << "Please enter a double: ";

	while (!(std::cin >> vardouble)) {
		std::cout << "Invalid input. Please enter a double: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "You entered: " << vardouble << std::endl;

	//Input and output of a string; no exceptions as any input can be a string
	cout << "Please enter a string: ";

	cin >> varstring;

	std::cout << "You entered: " << varstring << std::endl;
	
	return 0;
}