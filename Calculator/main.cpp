#include <print>
#include <iostream>

int main()
{
	int x{};
	std::print("Enter a number: ");
	std::cin >> x;
	std::cout << "You entered " << x;
	return 0;
}