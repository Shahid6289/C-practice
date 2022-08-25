#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is: "<<real<<endl;
            cout<<"The imaginary part is: "<<imaginary<<endl;

        }
        void setData(int r, int i){
            real = r;
            imaginary = i;
        }
};

int main() {
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr1 = new Complex();
    // (*ptr).setData(10,20); is same as, ptr->setData(10,20);
    ptr1->setData(10,20);
    // (*ptr).getData(); is same as, ptr->getData();
    ptr1->getData();



    // Array of objects
    Complex *ptr2 = new Complex[5];
    ptr2->setData(10,5);
    ptr2->getData();
    return 0;
}