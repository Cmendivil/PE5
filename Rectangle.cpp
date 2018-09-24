/*
Jacob Tran
Cristian Mendivil
CSCI 3010
PE5
*/

#include <cmath>
#include "Rectangle.h"

using namespace std;

/*
number is a positive number that user wants to calculate the factorial of it(numer!) 
returns factorial of a number
*/
unsigned int Factorial( unsigned int number ){
	if(number == 0){ //base case
		return 1;
	}
	else{
		return number * Factorial(number-1);
	}
	
}

Rectangle::Rectangle(Point p1, Point p2) {
	p1_ = p1;
	p2_ = p2;
}

/*
returns the width between p1.x and p2.x
*/
int Rectangle::GetWidth() {
	return abs(p1_.x - p2_.x);
}

/*
returns the height between p1.y and p2.y
*/
int Rectangle::GetHeight() {
	return abs(p1_.y - p2_.y);
} 

/*
other is the other point you're comapring it to
returns a bool if any point overlaps
*/
bool Rectangle::Overlaps(Rectangle& other) {
	if (p1_.x > other.p2_.x || other.p1_.x > p2_.x) {
		return true;
	} 
	if (p1_.y < other.p2_.y || other.p1_.y < p2_.y) {
		return true;
	}
	return false;
}

/*
returns the area of the rectangle as an int
*/
int Rectangle::CalculateArea() {
	return GetWidth()*GetHeight();
}

/*
increase the rectangle size
*/
void Rectangle::Expand() {
	p1_.x -= 1;
	p1_.y -= 1;
	p2_.x += 1;
	p2_.y += 1;
	
}

/*
decrease the rectangle size
*/
void Rectangle::Shrink() {
	p1_.x += 1;
	p1_.y += 1;
	p2_.x -= 1;
	p2_.y -= 1;
	
}
