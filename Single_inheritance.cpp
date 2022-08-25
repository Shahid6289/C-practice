#include<iostream>
using namespace std;

class Base{
    int data1;
    public:
        int data2;
        void setdata();
        int getData1();
        int getData2();
};

void Base :: setdata(){
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : public Base{
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    data3 = data2 * getData1();
}

void Derived :: display(){
    cout<<"Value of data is "<<getData1() <<endl;
    cout<<"Value of data is "<<data2 <<endl;
    cout<<"Value of data is "<<data3 <<endl;
}

int main() {
    Derived der;
    der.setdata(); 
    der.process();
    der.display();
    return 0;
}