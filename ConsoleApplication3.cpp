// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void funcA(int num) {
	if (num > 50) {
		funcB(10);
	}
}

void funcB(int num) {
	if (num > 50) {
		funcA(10);
	}
}



int main()
{
	std::cout << "Hello World!\n";
}

