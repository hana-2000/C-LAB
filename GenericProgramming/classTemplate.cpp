#include <iostream>
using namespace std;

template <class T>
class calculator
{
private:
    T num1, num2;

public:
    calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void displayresult()
    {
        cout << "Addition" << add();
        cout << "Subtraction" << sub();

        cout << "Multiplication" << mult();
        cout << "Division" << div();
    }
    T add()
    {
        return num1 + num2;
    }
    T sub()
    {
        return num1 - num2;
    }
    T mult()
    {
        return num1 * num2;
    }
    T div()
    {
        return num1 / num2;
    }
};

int main()
{
    calculator<int> intcalc(4, 7);
    calculator<float> floatcalc(3.67, 6.32);
    cout << "integer results";
    intcalc.displayresult();
    cout << "float results";
    floatcalc.displayresult();
    return 0;
}