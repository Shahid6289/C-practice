#include<iostream>
using namespace std;

int main() {
       int age;

    cout<<"Tell me your age:" <<endl;
    cin>>age;

    switch (age)
    {
        case 18:
        cout<<"You are 18"<<endl;
        break;

        case 22:
        cout<<"You are 22"<<endl;
        break;

        case 33:
        cout<<"You are 33"<<endl;
        break;

        default:
        cout<<"You are not 18, 22 or 33"<<endl;
        break;

    }
    return 0;
}