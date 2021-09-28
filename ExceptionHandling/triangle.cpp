#include<iostream>
using namespacestd;
void area(int a,int b,int c){
 float ar,p;
     p=(a+b+c)/2;
     ar=sqrt(p*(p-a)*(p-b)*(p-c));
     cout << " \nArea of Triangle is \n" << ar;
}
int main(){
int x,y,z;

cout<<"Enter the sides of triangle \n";
cin>> x>>y>>z;

try
cout<< "The side of Triangle is Valid \n";
        display();
        area(x,y,z);

try
return 0;
}
