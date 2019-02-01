#include <iostream>
#include "polygonarray.h"
#include "Polygon.h"
#include "PolygonArray.h"
#include "Rectangle.h"
#include "Triangle.h"


using namespace std;

int main()
{

    Polygon *ptr = new Rectangle(2,1);
    Polygon *ptr2 = new Rectangle(2,1);
    Polygon *ptr3 = new Rectangle(2,1);
    Polygon *ptr4 = new Rectangle(2,1);
    Polygon *ptr5 = new Rectangle(2,1);

    Polygon *super[]={ptr,ptr2,ptr3,ptr4,ptr5};

    polygon **super_puntero = super;

    return 0;

}
