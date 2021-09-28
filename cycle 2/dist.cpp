#include<iostream>
#include<cmath>
using namespace std;
class shortdistance
{
private:
   int x1,x2,x3,y1,y2,y3;
   double a,b,c;
public:
   void putvalues();
   void output();
   void compare();
};
inline void shortdistance :: putvalues()
{      
 cout<<"enter the first coordinates"<<endl;
 cin>>x1>>y1;
 cout<<"enter the second coordinates"<<endl;
 cin>>x2>>y2;
 cout<<"enter the third coordinates"<<endl;
 cin>>x3>>y3;
 }
inline  void shortdistance :: output()
 {
 a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
 cout<<"the distance btw first and second coordinates"<<a<<endl;
 
 b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
 cout<<"the distance btw second and third coordinates"<<b<<endl;
 
 c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
 cout<<"the distance btw  third and first coordinates"<<c<<endl;
  }
inline void shortdistance :: compare()
 {
 if(a<b&&a<c)
    {
    cout<<"a is the shortest distance"<<a<<endl;
    }
 else if(b<a&&b<c)  
   {
   cout<<"b is the shortest distance"<<b<<endl;
   }
   else
   cout<<"c is the shortest distance"<<c<<endl;
 }
 
 int main()
 {
 cout<<"PROGRAM USING INLINE FUNCTION"<<endl;
 shortdistance sd;
 sd.putvalues();
 sd.output();
 sd.compare();
 
return 0;
 }  
  
    
