#include<iostream>
using namespace std;

int main() {
    int a = 2;
    int *b = &a;
    int **c = &b;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of c is "<<&c<<endl;
    return 0;
    }
