/*
Write a program using inheritance such that the derived class multiplies
one public member and one private member of the base class?
*/

#include <iostream>
using namespace std;

class base{
int x;
public:
    int y;
    base(int a,int b){
    x=a;
    y=b;
    }
    int getX(){
    return x;
    }
};
class derived:public base{
public:
    derived(int a,int b):base(a,b){};
    void mul();
};

void derived::mul(){
int m;
m=y*getX();
cout<< "Answer is "<<m;
}

int main(){
    derived d(4,5);
    d.mul();
return 0;
}
