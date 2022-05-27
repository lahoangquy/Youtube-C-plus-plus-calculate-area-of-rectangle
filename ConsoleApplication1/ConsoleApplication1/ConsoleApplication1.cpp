// Problem 3: We will calcualte the area of rectangle
#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;

// our result is 24 and it make sense as we got 3*2 = 6 and 2*2 = 4 ; 6*4= 24

// We did use the keyword friend for the function duplicate. The function duplicate is  a friend function of the class rectangle.
// Therefore it will be able to access the width and height of the the class. but it is not a member of a class. It is only a function which can access to private and protected function of a class.

class Rectangle
{
	int width, height;
public:
	Rectangle() {};
	Rectangle(int x, int y) : width(x), height(y) {}
	int area() { return width * height; }
	friend Rectangle duplicate(const Rectangle&);

};

Rectangle duplicate(const Rectangle& param) {
	Rectangle res;
	res.width = param.width * 2;
	res.height = param.height * 2;
	return res;
}
int main()
{
	Rectangle r1;
	Rectangle r2(2, 3);
	r1 = duplicate(r2);
	cout << r1.area() << endl;
	system("pause");
	return 0;
}


