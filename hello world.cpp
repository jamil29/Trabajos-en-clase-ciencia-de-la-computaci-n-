#include <iostream>

using namespace std;

int main()
{
    int x=5;
    int y=6;
    int suma= x+y;
    int multi=x*y;
    int resta=x-y;
    int divi=x/y;
    
    std::cout<<multi<<std::endl;
    std::cout<<resta<<std::endl;
    std::cout<<divi<<std::endl;
     float x,y;
    std::cout<<"ingrese el valor del \n radio " <<std::endl;
    cin>>x;
    float pi=3.1416;
    float a=pi*(x*x);
    std::cout<<"el area del circulo es: "<<std::endl;
    std::cout<<a<<std::endl;
    
    return 0;
}
