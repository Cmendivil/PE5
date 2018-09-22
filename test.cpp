#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <cmath>
#include "Rectangle.h"


TEST_CASE ( "Factorials are computed", "[factorial]") {
  REQUIRE( Factorial(1) == 1 );
  REQUIRE( Factorial(2) == 2 );
  REQUIRE( Factorial(3) == 6 );
  REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE ( "Rectangle constructor", "[rectangle]") {
  Point point1;
  Point point2;
  point1.x = 0;
  point1.y = 0;
  point2.x = 2;
  point2.y = 2;
  Rectangle rectangle(point1, point2);
  REQUIRE( rectangle.get_p1().x == point1.x );
  REQUIRE( rectangle.get_p1().y == point1.y );
  REQUIRE( rectangle.get_p2().x == point2.x );
  REQUIRE( rectangle.get_p2().y == point2.y );
}

TEST_CASE ( "Rectangle width function", "[getwidth]") {
  Point point1;
  Point point2;
  point1.x = 0;
  point1.y = 0;
  point2.x = 2;
  point2.y = 2;
  Rectangle rectangle(point1, point2);
  REQUIRE( rectangle.GetWidth() == std::abs(point1.x - point2.x));
}

TEST_CASE ( "Rectangle height function", "[getheight]") {
  Point point1;
  Point point2;
  point1.x = 0;
  point1.y = 0;
  point2.x = 2;
  point2.y = 2;
  Rectangle rectangle(point1, point2);
  REQUIRE( rectangle.GetHeight() == std::abs(point1.y - point2.y));
}

TEST_CASE ( "Rectangle Overlaps function", "[overlaps]") {
  Point point1;
  Point point2;
  Point point3; //point for other rectangle
  Point point4; //point for other rectangle
  point1.x = 0;
  point1.y = 0;
  point2.x = 2;
  point2.y = 2;
  point3.x = 0;
  point3.y = 0;
  point4.x = 2;
  point4.y = 2;
  Rectangle rectangle(point1, point2);
  Rectangle rectangle2(point3, point4);
  REQUIRE( rectangle.Overlaps(rectangle2) == true);
  point3.x = 2; //change coordinates
  point3.y = 2;
  point4.x = 4;
  point4.y = 4;
  Rectangle rectangle3(point3, point4); //rectangle for test2
  REQUIRE( rectangle.Overlaps(rectangle3) == true);
  point3.x = 3;
  point4.y = 3; 
  Rectangle rectangle4(point3, point4); //rectangle for test3
  REQUIRE( rectangle.Overlaps(rectangle4) == false);
  
}
