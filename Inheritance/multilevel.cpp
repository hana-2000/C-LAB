#include <iostream>
using namespace std;

class student{
protected:
    int roll_no;
    public:
    void getData();
    int putData();
};

class test:public student{
protected:
    int sub1,sub2;
public:
    void getsubMarks();

};

class result:public test{
protected:
    int total;
public:
    void getMarks();
};

class Total:public result{

};
void student::getData(){
 cout << "Enter the roll no ";
 cin>> roll_no;
}
int student::putData(){
cout<< roll_no;
}
void test::getsubMarks(){
cout<< "Enter the sub 1,sub 2 marks "<<endl;
cin>>sub1>>sub2;
}
void result::getMarks(){
cout << "Enter the total marks ";
cin>> total;
}
int main(){
result stud1;
stud1.getData();
stud1.getMarks();
stud1.putData();
return 0;
}
