#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>

using namespace std;

class Polygon
{
    public:
        Polygon(int x , int y){
            this ->width = x;
            this ->height = y;
        }
        virtual void area()=0;
        Polygon();

        void print_area(){
            cout<<width <<height;
        }

    protected:
        int width;
        int height;

};

#endif // POLYGON_H


