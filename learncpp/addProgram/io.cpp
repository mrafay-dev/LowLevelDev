#include "io.h"
#include <iostream>
using namespace std;

int readNumber() {
	cout << "Enter a number: ";
	
	int num;
	cin >> num;
	return num;
}

void writeAnswer(int answer){
	cout << "The two numbers added together is: " << answer << "\n";
}