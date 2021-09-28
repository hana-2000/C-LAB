#include <iostream>
using namespace std;
class Distance
{ int feet, inch;
public:
 Distance()
    {
      cout << "Enter distance in Feet: ";
      cin >> feet;
      cout << "Enter distance in Inch: ";
      cin >> inch;
    }
 Distance(float meters)
    {
      inch = (meters * 100) / 2.54;
      feet = inch / 12;
      inch = inch % 12;
    }
 void show()
    {
      cout << " Feet: " << feet;
      cout << " , Inch: " << inch;
    }
    
 operator float()
   { return (((feet * 12 + inch) * 2.54) / 100);
    }
};
int main()
{
    float input;
    Distance D1;
    float meters = D1;
    cout << "\nConverted distance from Feet and inch to Meter: " <<meters<<endl;
    cout << "\nEnter the distance in Meters to be converted to Feet and Inch: ";
    cin >> input;
    Distance D2 = input;
    D2.show();
    return 0;
}
