/*C++ PROGRAM TO T=FIND OUT WHETHER A TRIANGLE IS VALID,DISPLAY THE SIDES AND FIND OUT THE AREA*/

#include <iostream>
#include<cmath>

using namespace std;

class triangle
{
private:
    int a,b,c;
    int area,s;
public:
    void input()
       {
           cout<<"Enter the three sides of triangle"<<endl;
           cin>>a>>b>>c;
       }

   void validity()
   {
       if(a+b>c||b+c>a||c+a>b)
          cout<<"triangle is valid"<<endl;
       else
        cout<<"invalid"<<endl;

   }
   void AREA()
   {
       s=(a+b+c)/2;
       area=sqrt(s*(s-a)*(s-b)*(s-c));
       cout<<"Area of triangle is"<<" "<<area<<endl;
   }


};
int main()
{
    triangle t;
    t.input();
    t.validity();
    t.AREA();

    return 0;
}

/*OUTPUT
Enter the three sides of triangle
3
4
5
triangle is valid
Area of triangle is 6
*/
