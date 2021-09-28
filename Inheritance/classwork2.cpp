/*
Define a class circle with a member function to find the area of a circle given the radius.
Derive a class cylinder from this and find the volume of it with the help of the area function defined in the circle class.
Include parameterised constructors only in both the classes.

*/

#include <iostream>
#define pi 3.14
using namespace std;

class circle{
public:
    int r;
    circle(int rad){
    r=rad;
    }
    float area();
};
class cylinder:public circle{
public:
    int h;
    cylinder(int rad,int height):
        circle(rad)
        {
          h=height;
        }
    float volume(){
    return(h*area());
    }
};

float circle::area(){
return(pi*r*r);
}

int main(){
    int radius,height;
    cout<<"Enter the radius and height \n";
    cin>> radius>>height;
cylinder c(radius,height);
cout<<"area ="<<c.area()<<endl<<"volume ="<<c.volume();
}
