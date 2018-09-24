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

int Rectangle::GetWidth() {
	return abs(p1.x - p2.x);
}

int Rectangle::GetHeight() {
	return abs(p1.y - p2.y);
} 

bool Rectangle::Overlaps(Rectangle& other) {
	if (p1.x == other.x && p1.y == other.y) {
		return true;
	} else if (p2.x == other.x && p2.y == other.y) {
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