#include <iostream>

//Copying Fundamentals | C++ Tutorials //ref link:https://www.youtube.com/watch?v=yXObZfT_e4w&list=PLFk1_lkqT8MaImkuU0ArJ6_dbr9nEN46a

//void square(int num) {
//int square(int num) {
//	//num *= num;
//	return num * num;
//}

class Point {
public:
	double x;
	double y;

	Point(double initX, double initY) {
		x = initX;
		y = initY;
	}
};

int main() {
	Point p1{ 1.0, 2.0 };
	Point p2 = p1;
	
	
	
	//int x = 5;
	////square(x);
	//int y = square(x);
	//
	////std::cout << "x = " << x << '\n';
	//std::cout << "y = " << y << '\n';





	//int x = 1;
	////int y = x;
	////int y{ x };
	////int y(x);
	////int y = x;
	////y = 2;
	//int y = 3;
	//y = x;
	//x = 2;
	//
	//std::cout << "x = " << x << '\n';
	//std::cout << "y = " << y << '\n';

	return 0;
}