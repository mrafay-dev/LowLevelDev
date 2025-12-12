#include <iostream>

void print(int x)
{
	std::cout << x << '\n';
}

int main()
{
	print( static_cast<int>(5.5) ); 
	
	char c {};
	std::cout << "Enter a character: ";
	std::cin >> c;
	
	std::cout << "You entered '"<< c <<"', which has ASCII CODE" << static_cast<int>(c) << "\n";
	
	
	system("pause");
	return 0;
}
