#include "IO.h"
#include <iostream>
#include <string>

std::string getName(int pos) {
	std::cout << "Enter the name for Person #" << pos << ": ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	
	return name;
}

int getAge(int pos) {
	std::cout << "Enter the age for Person #" << pos << ": ";
	int age{};
	std::cin >> age;
	
	return age;
}

void printStatement(const std::string& name1, const std::string& name2, int age1, int age2){
	if (age1 > age2) {
		std::cout << name1 << " age (" << age1 << ")" << " is older than " << name2 << " age (" << age2 << ")" << "\n";
	}	else if (age2 > age1) {
		std::cout << name2 << " age (" << age2 << ")" << " is older than " << name1 << " age (" << age1 << ")" << "\n";
	} else {
		std::cout << name1 << " age (" << age1 << ")" << " is the same age as " << name2 << " age (" << age2 << ")" << "\n";
	}
	
}
