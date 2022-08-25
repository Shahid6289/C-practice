#include<iostream>
using namespace std;

class BaseClass {
    public:
        int var_base = 43;
        virtual void display(){
            cout << "Displaying base class variable var_base "<<var_base << endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        int var_derived = 23;
         void display(){
            cout << "Displaying base class variable var_base "<<var_base << endl;
            cout<<"Displaying derived class variable var_derived "<<var_derived << endl;
        }
};

int main() {
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived; // base_class_pointer is pointing to DerivedClass object.
    base_class_pointer->display(); // calling display() function of DerivedClass object.
    return 0;
}