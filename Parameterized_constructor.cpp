#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);  //constructor declaration

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};

Complex ::Complex(int x, int y)  //----> This is a parameterized constructor as it takes no parameter
{
    a = x;
    b = y;
}

int main() {
    Complex a(4,1);

    Complex b = Complex(5,2);

    a.printnumber();
    b.printnumber();
 
    return 0;
}