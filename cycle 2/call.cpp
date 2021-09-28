#include<iostream>
using namespace std;

class swap_value{
      private:
      int a,b;
      public:
      void input()
      {
      cout<<"Enter the values of a and b"<<endl;
      cin>>a>>b;
      }
    void swap_call_by_value(swap_value s)
 {
 
     int temp;
     temp=s.a;
     s.a=s.b;
     s.b=temp;
     
 }

void swap_call_by_address(swap_value *s)
  {
      int temp;
      temp=s->a;
      s->a= s->b;
      s->b=temp;
     
  }

void swap_call_by_ref(swap_value &s)
   {
   int temp; 
   temp=s.a;
   s.a=s.b;
   s.b=temp;
   }
   
void output()
{
cout<<"a="<<a<<"b="<<b<<endl;
}   
 };  

  int main() 
{ 

   swap_value s;
   s.input();
   cout<<"CALL BY VALUE"<<endl;
   s.swap_call_by_value(s);
   s.output();
   cout<<"CALL BY ADDRESS"<<endl;
   s.swap_call_by_address(&s);
   s.output();
   cout<<"CALL BY REFERENCE"<<endl;
   s.swap_call_by_ref(s);
   s.output();
   return 0;
   }
 






