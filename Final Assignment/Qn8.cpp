
#include <iostream>

using namespace std;

class FRACTION
{
public:
    float numerator, denomenator, numden;
    void input()
    {
        cout << "\nEnter the Numerator      : ";
        cin >> numerator;
        cout << "Enter the Denomenator    : ";
        cin >> denomenator;
        numden = numerator / denomenator;
    }
    void addition(float add)
    {
        cout << "\nResult of Addition       : " << add << endl;
    }
    void subtraction(float &sub)
    {
        cout << "\nResult of Subtraction    : " << sub << endl;
    }
    void multiplication(float *mul)
    {
        cout << "\nResult of Multiplication : " << *mul << endl;
    }
};

int main()
{
    FRACTION a, b;
    a.input();
    float add, sub, mul;
    b.input();
    add = a.numden + b.numden;
    sub = a.numden - b.numden;
    mul = a.numden * b.numden;
    a.addition(add);
    b.subtraction(sub);
    a.multiplication(&mul);
    return 0;
}