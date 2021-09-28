
/*
Constructors in multiple inheritance with explicit call
*/

#include <iostream>
using namespace std;


class A{
public:

    A(){

    cout<<"zero arg base constructor class A "<<endl;
    }

};
class B{
public :
B()
   {
cout<<"zero arg base constructor  class B"<<endl;
}

};

class C:public B,public A{
public :
C():A(),B()
   {
cout<<"zero arg derived constructor  class C"<<endl;
}

};

int main(){
B b;
}
