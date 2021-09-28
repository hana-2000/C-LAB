#include<iostream>
 using namespace std;
 class complex
  {
  int x,y;
  public:
  complex()
  {
  x=0;
  y=0;
  }
   
   friend istream & operator >>(istream &pin ,complex &c);
   friend ostream & operator <<(ostream &dout ,complex &c);
    
  };
  
  istream & operator >>(istream &pin ,complex &c)     
  {
  cout<<"Enter values of x and y : ";
  pin>>c.x>>c.y;
  return pin;
  }
   ostream & operator <<(ostream &dout,complex &c)     
  {  
  dout<<"("<<c.x<<"+ j"<<c.y<<")";
  return dout;
  }
  
  int main()
  {
  complex C3;
  cin>>C3;
  cout<<"Displaying the complex number: ";
  cout<<C3<<"\n";
  
  return 0;
  }
