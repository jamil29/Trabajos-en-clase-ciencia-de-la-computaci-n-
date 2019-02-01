#include <iostream>
#include "Polygon.h"
using namespace std;

class Rectangle: public Polygon {
  public:
    Rectangle(int a,int b) : Polygon(a,b) {}
    int area()
      { return width*height; }
};
