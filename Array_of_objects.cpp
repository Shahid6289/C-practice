#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 1000;
        cout << "Enter the id of the employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of the employee is " << id << endl;
    }
};

int main()
{
    Employee Google[4];
    for (int i = 0; i < 4; i++)
    {
        Google[i].setId();
        Google[i].getId();
    }
    return 0;
}