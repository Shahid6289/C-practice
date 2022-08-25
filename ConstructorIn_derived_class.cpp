#include<iostream>
using namespace std;
  
class Base1{
    int data;
    public:
        Base1(int i){
            data = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(){
            cout<<"The value of data is: "<<data<<endl;
        }
};
class Base2{
    int data;
    public:
        Base2 (int i){
            data = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printDataBase2(){
            cout<<"The value of data is: "<<data<<endl;
        }
};

class Derived : public Base1, public Base2{
    int derived1, derived2;
    public: 
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDataDerived(){
            cout<<"The value of data is: "<<derived1<<endl;
            cout<<"The value of data is: "<<derived2<<endl;
        }
};


int main() {
    Derived Shahid (1,2,3,4);
    Shahid.printDataBase1();
    Shahid.printDataBase2();
    Shahid.printDataDerived();
    return 0;
}