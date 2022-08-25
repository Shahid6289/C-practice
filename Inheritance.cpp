#include<iostream>
using namespace std;

class Employee{
    int id;
    int age;
    string name;

    public:
        float salary;
        Employee(int inpId){
            id = inpId;
            age = 20;
            salary = 100;
        }
};

// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}{
//     int id;
//     int age;
//     string name;
//     float salary;
// };


int main() {
    Employee Shahid(1), Rohan(2), Rishabh(3);
    cout<<Shahid.salary<<endl;
    cout<<Rohan.salary<<endl;
    return 0;
}