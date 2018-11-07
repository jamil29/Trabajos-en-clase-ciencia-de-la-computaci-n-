#include <iostream>

#include "polygonarray.h"

using namespace std;

int main()
{
    point p(1,3);
    point q(3,3);
    point r(3,1);
    point arr[]={p,q,r};
    int size = sizeof(arr)/sizeof(arr[0]);
    point pa2(arr,size);
    point pa=pa2;
    cout<<pa.getsize()<<endl;
    pa.clear();
    cout<<pa.getsize()<<endl;

    return 0;

}
