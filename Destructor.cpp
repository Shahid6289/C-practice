#include<iostream>
using namespace std;

int count = 0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }

        ~num(){
            cout<<"This is the time when destructor is called for object number"<<count<<endl;
            count--;
        }
};

int main() {
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first object"<<endl;
    num n1;{
        cout<<"Entering the block"<<endl;
        cout<<"Creating second object"<<endl;
        num n2;
        cout<<"Creating third object"<<endl;
        num n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to main function"<<endl;
    return 0;
}