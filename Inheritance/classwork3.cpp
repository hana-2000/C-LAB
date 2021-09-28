/*
1. PF Loan class and DEPT class are derived from EMPLOYEE class which contains
personal information name, ,age,addr. Read and display all information. The program
should also
a) Find those employees who have taken PF Loan.
b) Find the average age of all employees under a particular department. (Add any fields
which you think is necessary)
*/

#include <iostream>
using namespace std;

class EMPLOYEE{
protected:
    string name,addr;
    int age;
public:
    void getData();
    void display();
    virtual void getStatus(){};
    virtual int Check(EMPLOYEE *obj){};
    virtual int output(){};
};
class PFloan:public EMPLOYEE{
protected:
    char loan_status;
public:
    void getStatus();
    int Check(EMPLOYEE *obj);
    int output();
};

class Department:public EMPLOYEE{
protected:
    int dept;
public:

    void getStatus();
    int Check(EMPLOYEE *obj);
    int output();
};

void EMPLOYEE::getData(){
cout << "Enter the Name,age,addr \n";
cin>>name>>age>>addr;
}
void EMPLOYEE::display(){
cout<<name<<"\t"<<age<<"\t"<<addr<<endl;
}

void PFloan::getStatus(){
cout<<"Enter your loan status(y/n)\n";
cin>>loan_status;
}
void Department::getStatus(){
cout<<"Choose your department \t1.Dpt1\t2.Dpt2\t3.Dpt3\t4.Dpt.4\n";
cin>>dept;
}
int PFloan::Check(EMPLOYEE *obj){
if(loan_status=='y')
    return 1;
else
    return 0;
}
int Department::Check(EMPLOYEE *obj){

return dept;
}
int PFloan::output(){
cout<<name<<endl;
return age;
}
int Department::output(){

    return age;
}


int main(){
EMPLOYEE *emp;
PFloan p[20];
Department d[20];
int i,n,a,dp,key,age,sum=0,cn=0;
cout<< "Enter the number of Employees \n";
cin >> n;
for(i=0;i<n;i++){

    emp=&p[i];
    emp->getData();
    emp->getStatus();
    emp=&d[i];
    emp->getStatus();
}
cout<<"Name"<<"\t"<<"Age"<<"\t"<<"Addr"<<endl;
for(i=0;i<n;i++){

    emp=&p[i];
    emp->display();
}

cout<<"\n Enter your option\n"<<endl;
cout<<" 1.Checking PFloan\n 2.Finding Average\n";
cin>>key;
switch(key){
case 1:
    {
      cout<<"People who have taken PFloan "<<endl;
for(i=0;i<n;i++){

    emp=&p[i];
    a=emp->Check(emp);
    if(a==1)
    emp->output();
}
break;
    }
case 2:
    {
        cout<< "Enter the particular department \n";
        cin>>dp;
        for(i=0;i<n;i++){

    emp=&d[i];
    a=emp->Check(emp);
    if(a==dp){
            cn++;
            emp=&p[i];
        age=emp->output();
        sum=sum+age;
    }

}
cout<<"age average = "<<sum/cn;
    }

}

return 0;
}
