/*
6. Employee class contain details like name,emp no,pay rate, constructor function and a
pay() function. Manager class inherits from employee and has the option of drawing pay
on hourly basis or salary basis and has an additional data is salaried(bool). Class
Supervisor is derived from employee and has an additional field department and is
always salaried. Base and both derived classes should contain pay() function with same
name.
*/

#include <iostream>
using namespace std;

class employee{
protected:
    string name;
    int empNo;
    float payRate;
public:
    employee(string n,int e,float p){
    name=n;
    empNo=e;
    payRate=p;
    }
    float pay
};

class manager:public employee{
public:

};

class supervisor:public employee{

};
