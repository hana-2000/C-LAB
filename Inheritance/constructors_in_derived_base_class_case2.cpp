/*
Base class with various constructors and derived class with one constructor..
*/
#include <iostream>
using namespace std;

class A{
public:
    int x;
    A(){
    cout<<"zero arg base constructor "<<x<<endl;
    }
    A(int k){
        x=k;
    cout<<"one arg base constructor "<<x<<endl;
    }

};
class B:public A{
public :int y;
B(int j)/*:
    A(j)*/
    {
    y=j;
cout<<"one arg derived constructor "<<y<<endl;
}

};

int main(){
B b(2);
}
