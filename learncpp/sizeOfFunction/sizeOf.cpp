#include <iostream>
#include <iomanip>
#include <climits>


int main() {
	
	std::cout << "a char is:" << CHAR_BIT << "bytes\n\n";
	std::cout << std::left;
	std::cout << std::setw(16) << "int: " << sizeof(int) << "bytes\n";
	
	int x {2147483647};
	std::cout << x << "\n";
	std::cout << x + 1;
	
	
	system("pause");
	return 0;
}
