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
this could have returned a negative in the bad code
*/
int Rectangle::GetWidth() {
	return abs(p1_.x - p2_.x);
}

/*
returns the height between p1.y and p2.y
this could have returned a negative in the bad code
*/
int Rectangle::GetHeight() {
	return abs(p1_.y - p2_.y);
} 

/*
other is the other point you're comapring it to
returns a bool if any point overlaps
*/
bool Rectangle::Overlaps(Rectangle& other) {
	Point p1 = other.get_p1();
	Point p2 = other.get_p2();
	if (p1_.x <= p1.x && p1_.y <= p1.y && p1.x <= p2_.x && p1.y <= p2_.y) {
		return true;
	} 
	if (p1.x <= p1_.x && p1.y <= p1_.y && p2.x >= p1_.x && p2.y >= p1_.y) {
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
expand didn't know the two cases for point starting location in the bad code 
*/
void Rectangle::Expand() {
	// the inputs are p1=bottom left, and p2=top right
	if (p2_.x > p1_.x && p2_.y > p1_.y) {
		p1_.x -= 1;
		p1_.y -= 1;
		p2_.x += 1;
		p2_.y += 1;
	}
	// the inputs are p1=top left and p2=bottom right
	if (p2_.x > p1_.x && p1_.y > p2_.y) {
		p1_.x -= 1;
		p1_.y += 1;
		p2_.x += 1;
		p2_.y -= 1;
	}
}

/*
decrease the rectangle size
shrink didn't know the two cases for point starting location in the bad code
*/
void Rectangle::Shrink() {
	// the inputs are p1=bottom left, and p2=top right
	if (p2_.x > p1_.x && p2_.y > p1_.y) {
		p1_.x += 1;
		p1_.y += 1;
		p2_.x -= 1;
		p2_.y -= 1;
	}
	// the inputs are p1=top left and p2=bottom right
	if (p2_.x > p1_.x && p1_.y > p2_.y) {
		p1_.x += 1;
		p1_.y -= 1;
		p2_.x -= 1;
		p2_.y += 1;
	}
}
