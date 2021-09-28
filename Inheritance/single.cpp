#include <iostream>
using namespace std;

class base{
int x;
public:
    int y;
    void getData();
    int getX();
    void sumBase();
    void output();
};

class derived:public base{
int a;
public:
    void mul();
    void show();
};

void base::getData(){
cout<< "Enter the values of x and y \n";
cin >> x >>y;
}

void base::output(){
cout << "X =" <<x<<"\n"<<"Y= "<<y<<endl;
}
int base ::getX(){
return x;
}
void base::sumBase(){
x++;
y++;
}

void derived::mul(){
   a=getX()*y;
}
void derived::show(){
cout<< "a ="<<a;
}

int main(){

derived d;
d.getData();
d.sumBase();
d.output();
d.mul();
d.show();

return 0;
}

