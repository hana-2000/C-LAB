   /*C++PROGRAM TO CREATE A CLASS DATES ,CHECK THE VALIDITY OF THE DATES AND ALSO TO FIND THE NEXT DATE*/


#include <iostream>

using namespace std;

class dates
{
  private:
    int day,nxtday, month, year,n,nxtmon,valid;
  public:

        void input();
        void MONTH();
        void Day();
        void output();
        void VALID();
};



    void  dates:: input()
    {
      cout << "The day,month and year is" << endl;
      cin >> day >> month >> year;
    }

  void dates:: MONTH()
   {
    if (month > 0 && month <= 12) {
      if (month == 4 || month == 6 || month == 9 || month == 11)
        {
         n = 30;
          Day();
        }
      else if (month == 2)
        {
        if ((year % 4 == 0)&&(year%100  !=0)||(year%400==0))
         {
          n = 29;
          Day();
          } else
           {
            n = 28;
             Day();
          }
        }
      else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
          n=31;
          Day();
        }
      else
          cout << "invalid" << endl;
    }}

    void dates:: Day()
    {
        if(day>0 &&day<=n)
       {
           VALID();
       }
       else
        cout<<"invalid"<<endl;
    }



  void dates :: output()
   {
    if (n != day)
    {
      nxtday=day+1;
      nxtmon=month;
    }

    if (n == day) {
      nxtday = 1;
      nxtmon=month+1;
    }
    if(month ==12&&day==31)
    {
        nxtday=1;
        nxtmon=1;
        year=year+1;
    }
    cout<<nxtday<<"/"<<nxtmon<<"/"<<year<<endl;
  }

   void dates :: VALID()
  {
   cout<<"Valid"<<endl;
    output();
  }


int main()
{
  dates d;
  d.input();
  d.MONTH();
   return 0;
}

/*OUTPUT

The day,month and year is
2
8
2020
Valid
3/8/2020

The day,month and year is
29
2
2005
invalid

*/
