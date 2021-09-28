/* C++ PROGRAM TO CREATE A PHONE STRUCTURE WITH DETAILS OF AREACODE,EXCHANGE,NUMBER*/

#include <iostream>
using namespace std;
struct phone
{
 int areacode;
 int exchange;
 int number;
};
int main()
{
  phone a,b;
  a.areacode=212;
  a.exchange=767;
  a.number=-8900;
  cout<<"enter the area code"<<endl;
  cin>>b.areacode;
  cout<<"enter the exchange"<<endl;
  cin>>b.exchange;
  cout<<"enter the number"<<endl;
  cin>>b.number;
  cout<<"My number is:"<<"("<<a.areacode<<")"<<a.exchange<<a.number<<endl<<"Your number is"<<"("<<b.areacode<<")"<<b.exchange<<"-"<<b.number<<endl;
   return 0;
}

/*OUTPUT

enter the area code
42125
enter the exchange
555
enter the number
1212
My number is:(212)767-8900
Your number is(415)555-1212
*/




