#include <iostream>

//Copying Fundamentals | C++ Tutorials //ref link:https://www.youtube.com/watch?v=yXObZfT_e4w&list=PLFk1_lkqT8MaImkuU0ArJ6_dbr9nEN46a

int main() {
	int x = 1;
	//int y = x;
	int y(x);
	//int y = x;
	//y = 2;

	std::cout << "x = " << x << '\n';
	std::cout << "y = " << y << '\n';

	return 0;
}