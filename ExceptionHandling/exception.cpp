#include <iostream>
using namespace std;


int main()
{
int x ,y,z;
cout<<"Enter the values of x and y";
cin>>x>>y;
z=x-y;
cout << "Before try \n";
try {
cout << "Inside try \n";
if (z < 0)
{throw x;
cout << "After throw (Never executed) \n";
}
else
cout<<"Result is"<<z;
}
catch (int x ) {
cout << "Exception Caught \n";
}
cout << "After catch \n";
return 0;
}