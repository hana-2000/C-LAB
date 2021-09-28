#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
    float radius, angle;

public:
    Polar(float r, float a)
    {
        radius = r;
        angle = a;
    }
    void show()
    {
        cout << "\n Polar Form is; \n radius: " << radius << "\n angle: " << angle;
    }
    float getRadius()
    {
        return radius;
    }
    float getAngle()
    {
        return angle;
    }
};

class Rectangular
{
    float x, y;

public:
    void operator=(Polar P)
    {
        x = P.getRadius() * cos((P.getAngle() * 3.14) / 180);
        y = P.getRadius() * sin((P.getAngle() * 3.14) / 180);
    }
    void show()
      {
        cout << "\n Coordinates in Recatangular form: \n x: " << x << "\n y: " << y;
    }
};

int main()
{
    float r, a;
    cout << "\n Enter Radius: ";
    cin >> r;
    cout << "\n Enter Angle: ";
    cin >> a;
    Polar P(r, a);
    P.show();
    Rectangular R;
    R = P;
    R.show();
    return 0;
}

