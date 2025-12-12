#include <iostream>
#include "BallAccelerationFunctions.h"



double getNewHeight(float time, double height){
	float g{9.81};
	
	return height - g * time*time / 2;
}

int getTime(double height){
	int time{0};
	double newHeight{height};
	
	while (newHeight >= 0) {
		std::cout << "The height of the ball at " << time << " seconds is: " << newHeight << "\n";
		time++;
		newHeight = getNewHeight(time, height);
	}
	return time;
}

double getHeight(){
	double height {};
	std::cout << "Enter the height of the tower: ";
	std::cin >> height;
	return height;
}
