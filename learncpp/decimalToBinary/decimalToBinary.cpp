#include <iostream>
#include <string>


int decToBin(int num, int divisor){
	int bit{};
	bit = (num / divisor) % 2;
	return bit;
}


int main() {
	std::cout << "Enter a number from 0 - 255: ";
	
	int num{};
	std::cin >> num;
	
	std::string ans = "";
	int divisor{128};
	
	for (int i = 0; i < 8; i++){
		
		ans += char('0' + decToBin(num, divisor));
		divisor /= 2;
	}
	std::cout << ans;
	
	system("pause");
	return 0;
}
