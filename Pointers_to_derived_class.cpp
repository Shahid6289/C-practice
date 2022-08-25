#include<iostream>
using namespace std;

class BaseClass {
    public:
        int var_base;
        void display(){
            cout << "Displaying base class variable var_base "<<var_base << endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        int var_derived;
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
    base_class_pointer->var_base = 23; 
    // base_class_pointer->var_derived = 23; // Error: var_derived is not accessible from base_class_pointer.

    base_class_pointer->display(); // calling display() function of DerivedClass object.


    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived; // derived_class_pointer is pointing to DerivedClass object.
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display(); // calling display() function of DerivedClass object.

    return 0;
}