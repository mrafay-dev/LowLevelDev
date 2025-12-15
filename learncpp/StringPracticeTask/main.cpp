#include <iostream>
#include <string>
#include "IO.h"


int main() {
	
	std::string name1{getName(1)};
	int age1{getAge(1)};
	
	std::string name2{getName(2)};
	int age2{getAge(2)};

	printStatement(name1, name2, age1, age2);

	system("pause");
	return 0;
}
