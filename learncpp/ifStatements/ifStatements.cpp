#include <iostream>


double calculate(double num1, char op, double num2){
	double ans{};
	if (op == '*')
		ans = num1 * num2; 
	else if (op == '/')
		ans = static_cast<double>(num1) / num2; 
	else if (op == '+')
		ans = num1 + num2; 
	else if (op == '-')
		ans = num1 - num2; 
	else
		return 0;
	return ans;
}

int main() {

	std::cout << "Enter a number: ";
	
	double num1 {};
	std::cin >> num1;
	
	std::cout << "Enter an operator: ";
	
	char op {};
	std::cin >> op;
	
	std::cout << "Enter a number: ";
	
	double num2 {};
	std::cin >> num2;
	
	double ans{};
	ans = calculate(num1, op, num2);
	if (ans)
		std::cout << num1 << op << num2 << "=: " << ans; 
	else 
		std::cout << "Enter a valid input!";

	system("pause");
	
	
	return 0;
}
