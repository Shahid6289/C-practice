#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex);
    int sumImgComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    friend int Calculator ::sumRealComplex(Complex, Complex);
    friend int Calculator ::sumImgComplex(Complex, Complex); // Friend class declare here.
    //friend class calculator;
public:
    void setNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void displayNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex c1, Complex c2)
{
    return (c1.a + c2.a);
}

int Calculator ::sumImgComplex(Complex c1, Complex c2)
{
    return (c1.b + c2.b);
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(2, 3);
    c2.setNumber(4, 5);
    Calculator calc;
    int result = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is: " << result << endl;
    int resultc = calc.sumImgComplex(c1, c2);
    cout << "The sum of Imaginary part of c1 and c2 is: " << resultc << endl;
    return 0;
}