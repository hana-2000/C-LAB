/*
Base and Derived class without default constructors..
*/

#include <iostream>
using namespace std;


class A{
public:
    int x;

    A(int k){
        x=k;
    cout<<"one arg base constructor "<<x<<endl;
    }

};
class B:public A{
    int y;
public :
B(int j,int k):
    A(j)
    {
    y=k;
cout<<"one arg derived constructor "<<y<<endl;
}

};

int main(){
B b(2,5);
}
