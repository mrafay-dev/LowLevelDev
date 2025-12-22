#include <iostream>

int main(){
	
	int num1{};
	int num2{};
	
	std::cout << "Enter an integer: ";
	std::cin >> num1;
	
	std::cout << "\nEnter a larger integer: ";
	std::cin >> num2;
	
	if (num1 > num2) {
		int temp{};
		temp = num1;
		num1 = num2;
		num2 = temp;
		std::cout << "\nSwapping the values...";
	}
	
	std::cout << "\nThe smaller value is: " << num1;
	std::cout << "\nThe larger value is: " << num2;

	
	system("pause");
	return 0;
}
