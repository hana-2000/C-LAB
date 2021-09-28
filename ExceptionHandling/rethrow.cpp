#include <iostream>
using namespace std;

void divide(float x, float y)
 { 
cout<<"Inside function"<<endl;
try
 { if(y==0.0)
throw y;
 else
cout<<"Div result="<<x/y<<endl;
 }
catch(float)
 {throw;}
cout<<"End of function"<<endl;
 }
int main()
 {
cout<<" Inside main"<<endl;
try
 {
 divide(10.5,2.1);
 divide(20.0,0.0);
 }
catch(float)
 { cout<<"Caught float inside main"<<endl;
 }
cout<<"End of main"<<endl;
return 0;
 }