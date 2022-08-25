#include<iostream>
using namespace std;

class Complex{
    int a, b;
public:
    void setNumber(int x, int y){
        a = x;
        b = y;
    }
     friend Complex sumComplex(Complex o1, Complex o2); //Friend function declare here.

    void displayNumber(void){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    };
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main() {
    Complex c1, c2, sum;
    c1.setNumber(2, 3);
    c2.setNumber(4, 5);

    c1.displayNumber();
    c2.displayNumber();

    sum = sumComplex(c1, c2);
    sum.displayNumber();

    return 0;
}