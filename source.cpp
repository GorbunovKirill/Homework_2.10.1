#include<iostream>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::string name;

	std::cout << "¬ведите свое им€: ";
	std::cin >> name;
	std::cout << name << std::endl;

	return 0;
}