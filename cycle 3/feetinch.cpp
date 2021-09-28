#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }
    void getDistance()
    {
        cout << "Enter the distance in feet , in inches:" << endl;
        cin >> feet >> inches;
    }
    Distance operator+(Distance D)
    {
        Distance d;
        d.feet = feet + D.feet;
        d.inches = inches + D.inches;
        while (d.inches >= 12)
        {
            d.inches = d.inches - 12;
            ++d.feet;
        }
        return d;
    }
    void displaySum()
    {
        cout <<"The added distance is: "<<feet<< " feet " << inches << " inches" << endl;
    }
    friend Distance operator<(Distance &, Distance &);
   
}; 
 Distance operator<(Distance &ob1 ,Distance &ob2)
 {
  int dist1= ob1.feet*12 + ob1.inches;
  int dist2= ob2.feet*12+ ob2.inches;
   
    if (dist1 < dist2)
     return ob1;
    else return ob2;
    }

int main()
{
    Distance ob1, ob2, ob3;
    ob1.getDistance();
    ob2.getDistance();
    ob3 = ob1 + ob2;
    ob3.displaySum(); 
    cout<< "\n The smaller distance is :";
    Distance d = ob1 < ob2;
    d.displaySum();
   return 0;
}
