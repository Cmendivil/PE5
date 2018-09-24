/*
Jacob Tran
Christian
CSCI 3010
PE5
*/

#include <cmath>
#include "Rectangle.h"

using namespace std;

Rectangle:Rectangle(Point p1, Point p2) {
	Point p1_ = p1;
	Point p2_ = p2;
}

/*
returns the width between p1.x and p2.x
*/
int Rectangle::GetWidth() {
	return abs(p1.x - p2.x);
}

/*
returns the height between p1.y and p2.y
*/
int Rectangle::GetHeight() {
	return abs(p1.y - p2.y);
} 

/*
other is the other point you're comapring it to
returns a bool if any point overlaps
*/
bool Rectangle::Overlaps(Rectangle& other) {
	if (p1.x > other.p2_.x || other.p1_.x > p2_.x) {
		return true;
	} 
	if (p1.y < other.p2_.y || other.p1_.y < p2_.y) {
		return true;
	}
	return false;
}

int Rectangle::CalculateArea() {

}

void Rectangle::Expand() {

}

void Rectangle::Shrink() {
	
}
